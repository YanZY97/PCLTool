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
 *   初始化VtkWidget
 */
void PCLTool::initialVtkWidget()
{
    cloud_src.reset(new pcl::PointCloud<pcl::PointXYZ>);
    cloud_dst.reset(new pcl::PointCloud<pcl::PointXYZ>);
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
    sor.setMeanK(50);
    sor.setStddevMulThresh(1.0);
    sor.filter(*cloud_dst);
    showCloudMsgs(cloud_dst);

    viewer->updatePointCloud(cloud_dst, "cloud");
    viewer->resetCamera();
    ui.qvtkWidget->update();
}
