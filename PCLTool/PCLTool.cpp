#include "PCLTool.h"
#include "vtkAutoInit.h"

VTK_MODULE_INIT(vtkRenderingOpenGL2);
VTK_MODULE_INIT(vtkInteractionStyle);

#include <qfiledialog.h>
#include <vtkRenderWindow.h>

PCLTool::PCLTool(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    initialVtkWidget();
    //打开文件
    connect(ui.actionOpen, &QAction::triggered, this, &PCLTool::openFile);
    //重置镜头
    connect(ui.btnResetCamera, &QPushButton::clicked, [=]() {
        viewer->resetCamera();
        ui.qvtkWidget->update();
        });
    //过滤离群点
    connect(ui.btnOutlierRemoval, &QPushButton::clicked, this, &PCLTool::outlierRemoval);
    //提取NARF特征点
    connect(ui.btnNARF, &QPushButton::clicked, this, &PCLTool::narfKeypointExtraction);
    //改变显示点大小
    connect(ui.hSliderPointSize, &QSlider::valueChanged, [=](int value) {
        viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, value, "cloud");
        ui.qvtkWidget->update();
        });
    //显示原始点云
    connect(ui.btnShowSrc, &QPushButton::clicked, [=]() {
        viewer->updatePointCloud(cloud_src, "cloud");
        viewer->resetCamera();
        ui.qvtkWidget->update();
        });
    //显示处理后点云
    connect(ui.btnShowDst, &QPushButton::clicked, [=]() {
        viewer->updatePointCloud(cloud_dst, "cloud");
        viewer->resetCamera();
        ui.qvtkWidget->update();
        });
}


/**
 *   初始化
 */
void PCLTool::initialVtkWidget()
{
    cloud_src.reset(new pcl::PointCloud<pcl::PointXYZ>);
    cloud_dst.reset(new pcl::PointCloud<pcl::PointXYZ>);
    keypoints_ptr.reset(new pcl::PointCloud<pcl::PointXYZ>);
    range_image_ptr.reset(new pcl::RangeImage);
    viewer.reset(new pcl::visualization::PCLVisualizer("viewer", false));
    viewer->addPointCloud(cloud_src, "cloud");
    viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 1, "cloud");
    viewer->setBackgroundColor(0, 0, 0);
    viewer->addCoordinateSystem(0.1);

    ui.qvtkWidget->SetRenderWindow(viewer->getRenderWindow());
    viewer->setupInteractor(ui.qvtkWidget->GetInteractor(), ui.qvtkWidget->GetRenderWindow());
    ui.qvtkWidget->update();
}

/**
 *  显示点云信息
 */
void PCLTool::showCloudMsgs(pcl::PointCloud<pcl::PointXYZ>::Ptr input_cloud)
{
    pcl::getMinMax3D(*input_cloud, min_p, max_p);
    float x_length = max_p.x - min_p.x;
    float y_length = max_p.y - min_p.y;
    float z_length = max_p.z - min_p.z;
    QString x_length_qstr = QString("%1").arg(x_length);
    QString y_length_qstr = QString("%1").arg(y_length);
    QString z_length_qstr = QString("%1").arg(z_length);
    QString num_points_qstr = QString::number(input_cloud->size());
    ui.lblNumPoints->setText(num_points_qstr);
    ui.lblXlength->setText(x_length_qstr);
    ui.lblYlength->setText(y_length_qstr);
    ui.lblZlength->setText(z_length_qstr);
}


/**
 *  SLOT:打开文件
 */
void PCLTool::openFile()
{
    QString file_name_qt = QFileDialog::getOpenFileName(this, tr("Open PointCloud"), ".", tr("PCD Files(*.pcd)"));
    QFileInfo file_info(file_name_qt);
    if (!file_name_qt.isEmpty())
    {
        std::string file_name = file_name_qt.toStdString();
        QString name = file_info.fileName();

        //判断pcd文件类型
        pcl::PCLPointCloud2 cloud2;
        Eigen::Vector4f origin;
        Eigen::Quaternionf orientation;
        int pcd_version;
        int data_type;
        unsigned int data_idx;
        int offset = 0;
        pcl::PCDReader rd;
        rd.readHeader(file_name, cloud2, origin, orientation, pcd_version, data_type, data_idx, offset);
        if (data_type == 0)
        {
            pcl::io::loadPCDFile(file_name_qt.toStdString(), *cloud_src);
        }
        else if (data_type == 2)
        {
            pcl::PCDReader reader;
            reader.read<pcl::PointXYZ>(file_name_qt.toStdString(), *cloud_src);
        }
        ui.lblFileName->setText(name);

        showCloudMsgs(cloud_src);
        *cloud_dst = *cloud_src;

        viewer->updatePointCloud(cloud_src, "cloud");
        viewer->resetCamera();
        ui.qvtkWidget->update();
    }
}

/**
 *  SLOT:移除离群点
 */
void PCLTool::outlierRemoval()
{
    sor.setInputCloud(cloud_dst);
    sor.setMeanK(ui.sboxMeank->value());
    sor.setStddevMulThresh(ui.sboxStdThresh->value());
    sor.filter(*cloud_dst);
    showCloudMsgs(cloud_dst);

    viewer->updatePointCloud(cloud_dst, "cloud");
    viewer->resetCamera();
    ui.qvtkWidget->update();
}

/**
 *  SLOT:提取NARF特征点
 */
void PCLTool::narfKeypointExtraction()
{
    float angular_resolution = pcl::deg2rad(ui.sboxAngularReslution->value());
    float noise_level = ui.sboxNoiseLevel->value();
    float min_range = ui.sboxMinRange->value();
    int border_size = ui.sboxBorderSize->value();
    float max_angle_width = pcl::deg2rad(360.0);
    float max_angle_height = pcl::deg2rad(360.0);
    float support_size = ui.sboxSupportSize->value();
    Eigen::Affine3f scene_sensor_pose(Eigen::Affine3f::Identity());
    pcl::RangeImage::CoordinateFrame coordinate_frame = pcl::RangeImage::CAMERA_FRAME;
    scene_sensor_pose = Eigen::Affine3f(Eigen::Translation3f(cloud_dst->sensor_origin_[0],
        cloud_dst->sensor_origin_[1],
        cloud_dst->sensor_origin_[2])) *
        Eigen::Affine3f(cloud_dst->sensor_orientation_);
    range_image_ptr->createFromPointCloud(*cloud_dst, angular_resolution, max_angle_width, max_angle_height,
        scene_sensor_pose, coordinate_frame, noise_level, min_range, border_size);
    range_image_ptr->setUnseenToMaxRange();
    pcl::NarfKeypoint narf_keypoint_detector(&range_image_border_extractor);
    //pcl::RangeImage& range_image = *range_image_ptr;
    range_image_border_extractor.setRangeImage(&*range_image_ptr);
    narf_keypoint_detector.getParameters().support_size = support_size;
    narf_keypoint_detector.compute(keypoint_indices);
    keypoints_ptr->points.resize(keypoint_indices.points.size());
    pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> keypoints_color_handler(keypoints_ptr, 0, 255, 0);
    for (size_t i = 0; i < keypoint_indices.points.size(); ++i)
        keypoints_ptr->points[i].getVector3fMap() = range_image_ptr->points[keypoint_indices.points[i]].getVector3fMap();
    viewer->addPointCloud<pcl::PointXYZ>(keypoints_ptr, keypoints_color_handler, "keypoints");
    viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 7, "keypoints");
    viewer->resetCamera();
    ui.qvtkWidget->update();
}
