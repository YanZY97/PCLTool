#include "PCLTool.h"
#include "vtkAutoInit.h"
#include "mesh2pcd.h"

VTK_MODULE_INIT(vtkRenderingOpenGL2);
VTK_MODULE_INIT(vtkInteractionStyle);

#include <qfiledialog.h>
#include <vtkRenderWindow.h>
#include <time.h>

PCLTool::PCLTool(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    initialVtkWidget();
    /*菜单栏*/
    //打开文件
    connect(ui.actionOpen, &QAction::triggered, this, &PCLTool::openFile);
    //打开ply/obj文件
    connect(ui.actionOpenPLY_OBJ_file, &QAction::triggered, this, &PCLTool::openMeshFile);

    /*显示部分*/
    //改变显示点大小
    connect(ui.hSliderPointSize, &QSlider::valueChanged, [=](int value) {
        viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, value, "cloud");
        ui.qvtkWidget->update();
        });
    //清除显示
    connect(ui.btnRmPointClouds, &QPushButton::clicked, [=]() {
        viewer->removeAllPointClouds();
        });
    //重置镜头
    connect(ui.btnResetCamera, &QPushButton::clicked, [=]() {
        viewer->resetCamera();
        ui.qvtkWidget->update();
        });
    //显示原始点云
    connect(ui.btnShowSrc, &QPushButton::clicked, [=]() {
        viewer->removePointCloud("cloud");
        viewer->addPointCloud(cloud_src_ptr, "cloud");
        ui.qvtkWidget->update();
        });
    //显示处理后点云
    connect(ui.btnShowDst, &QPushButton::clicked, [=]() {
        viewer->removePointCloud("cloud");
        viewer->addPointCloud(cloud_dst_ptr, "cloud");
        ui.qvtkWidget->update();
        });

    /*滤波工具卡*/
    //体素下采样
    connect(ui.btnVoxelGrid, &QPushButton::clicked, this, &PCLTool::voxelGrid);
    //过滤离群点
    connect(ui.btnOutlierRemoval, &QPushButton::clicked, this, &PCLTool::outlierRemoval);

    /*提取关键点工具卡*/
    //提取NARF特征点
    connect(ui.btnNARF, &QPushButton::clicked, this, &PCLTool::narfKeypointExtraction);
    //提取SIFT特征点
    connect(ui.btnSIFT, &QPushButton::clicked, this, &PCLTool::siftKeypointExtraction);
    //提取harris特征点
    connect(ui.btnHarris, &QPushButton::clicked, this, &PCLTool::harrisKeypointExtraction);

    /*两点云配准工具卡*/
    connect(ui.btnChooseCloud1, &QPushButton::clicked, this, &PCLTool::loadCloud1);
    connect(ui.btnChooseCloud2, &QPushButton::clicked, this, &PCLTool::loadCloud2);
    connect(ui.btnRegistration, &QPushButton::clicked, this, &PCLTool::doRegistration);
}

/**
 *   初始化
 */
void PCLTool::initialVtkWidget()
{
    cloud_src_ptr.reset(new pcl::PointCloud<pcl::PointXYZ>);
    cloud_dst_ptr.reset(new pcl::PointCloud<pcl::PointXYZ>);
    narf_keypoints_ptr.reset(new pcl::PointCloud<pcl::PointXYZ>);
    harris_keypoints_ptr.reset(new pcl::PointCloud<pcl::PointXYZI>);
    range_image_ptr.reset(new pcl::RangeImage);
    kdtree.reset(new pcl::search::KdTree<pcl::PointXYZ>);
    cloud_temp_ptr.reset(new pcl::PointCloud<pcl::PointXYZ>);
    cloud_tgt_ptr.reset(new pcl::PointCloud<pcl::PointXYZ>);
    cloud_tgt_ptr_grid1.reset(new pcl::PointCloud<pcl::PointXYZ>);
    cloud_tgt_ptr_grid2.reset(new pcl::PointCloud<pcl::PointXYZ>);
    cloud_input_ptr.reset(new pcl::PointCloud<pcl::PointXYZ>);
    cloud_input_ptr_grid1.reset(new pcl::PointCloud<pcl::PointXYZ>);
    cloud_input_ptr_grid2.reset(new pcl::PointCloud<pcl::PointXYZ>);
    cloud_registrated_ptr.reset(new pcl::PointCloud<pcl::PointXYZ>);

    viewer.reset(new pcl::visualization::PCLVisualizer("viewer", false));
    viewer->addPointCloud(cloud_src_ptr, "cloud");
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
 *  显示配准后点云信息
 */

void PCLTool::showRegMsgs(pcl::PointCloud<pcl::PointXYZ>::Ptr input_cloud, pcl::PointCloud<pcl::PointXYZ>::Ptr input_cloud2)
{
    pcl::getMinMax3D(*input_cloud, min_p, max_p);
    float x1_length = max_p.x - min_p.x;
    float y1_length = max_p.y - min_p.y;
    float z1_length = max_p.z - min_p.z;
    QString x1_length_qstr = QString("%1").arg(x1_length);
    QString y1_length_qstr = QString("%1").arg(y1_length);
    QString z1_length_qstr = QString("%1").arg(z1_length);
    pcl::getMinMax3D(*input_cloud2, min_p, max_p);
    float x2_length = max_p.x - min_p.x;
    float y2_length = max_p.y - min_p.y;
    float z2_length = max_p.z - min_p.z;
    QString x2_length_qstr = QString("%1").arg(x2_length);
    QString y2_length_qstr = QString("%1").arg(y2_length);
    QString z2_length_qstr = QString("%1").arg(z2_length);

    ui.lblTgtSizeX->setText(x1_length_qstr);
    ui.lblTgtSizeY->setText(y1_length_qstr);
    ui.lblTgtSizeZ->setText(z1_length_qstr);

    ui.lblResSizeX->setText(x2_length_qstr);
    ui.lblResSizeY->setText(y2_length_qstr);
    ui.lblResSizeZ->setText(z2_length_qstr);
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
        //pcl::PCLPointCloud2 cloud2;
        //Eigen::Vector4f origin;
        //Eigen::Quaternionf orientation;
        //int pcd_version;
        //int data_type;
        //unsigned int data_idx;
        //int offset = 0;
        //pcl::PCDReader rd;
        //rd.readHeader(file_name, cloud2, origin, orientation, pcd_version, data_type, data_idx, offset);
        //if (data_type == 0)
        //{
        //    pcl::io::loadPCDFile(file_name, *cloud_src);
        //}
        //else if (data_type == 2)
        //{
        //    pcl::PCDReader reader;
        //    reader.read<pcl::PointXYZ>(file_name, *cloud_src);
        //}
        
        pcl::io::loadPCDFile(file_name, *cloud_src_ptr);
        ui.lblFileName->setText(name);

        showCloudMsgs(cloud_src_ptr);
        *cloud_dst_ptr = *cloud_src_ptr;

        viewer->removeAllPointClouds();
        viewer->addPointCloud(cloud_src_ptr, "cloud");
        viewer->resetCamera();
        ui.qvtkWidget->update();
    }
}

/**
 *  SLOT:打开ply/obj文件并转为pcd点云
 */
void PCLTool::openMeshFile()
{
    QString file_name_qt = QFileDialog::getOpenFileName(this, tr("Open MeshFile"), ".", tr("Mesh Files(*.ply *.obj)"));
    QFileInfo file_info(file_name_qt);
    if (!file_name_qt.isEmpty())
    {
        std::string file_name = file_name_qt.toStdString();
        QString name = file_info.fileName();

        Mesh2PCD* transformer = new Mesh2PCD();
        *cloud_src_ptr = *transformer->Transform(file_name, 0.001);
        delete transformer;
        ui.lblFileName->setText(name);

        showCloudMsgs(cloud_src_ptr);
        *cloud_dst_ptr = *cloud_src_ptr;

        viewer->removeAllPointClouds();
        viewer->addPointCloud(cloud_src_ptr, "cloud");
        viewer->resetCamera();
        ui.qvtkWidget->update();
    }
    
}

/**
 *  SLOT:下采样
 */
void PCLTool::voxelGrid()
{
    grid.setInputCloud(cloud_dst_ptr);
    grid.setLeafSize(ui.sboxVoxelGridX->value(), ui.sboxVoxelGridY->value(), ui.sboxVoxelGridZ->value());
    grid.filter(*cloud_dst_ptr);

    showCloudMsgs(cloud_dst_ptr);
    viewer->removePointCloud("cloud");
    viewer->addPointCloud(cloud_dst_ptr, "cloud");
    ui.qvtkWidget->update();
}

/**
 *  SLOT:移除离群点
 */
void PCLTool::outlierRemoval()
{
    sor.setInputCloud(cloud_dst_ptr);
    sor.setMeanK(ui.sboxMeank->value());
    sor.setStddevMulThresh(ui.sboxStdThresh->value());
    sor.filter(*cloud_dst_ptr);

    showCloudMsgs(cloud_dst_ptr);
    viewer->removePointCloud("cloud");
    viewer->addPointCloud(cloud_dst_ptr, "cloud");
    ui.qvtkWidget->update();
}

/**
 *  SLOT:提取NARF特征点
 */
void PCLTool::narfKeypointExtraction()
{
    //参数
    float angular_resolution = pcl::deg2rad(ui.sboxAngularReslution->value());
    float noise_level = ui.sboxNoiseLevel->value();
    float min_range = ui.sboxMinRange->value();
    int border_size = ui.sboxBorderSize->value();
    float max_angle_width = pcl::deg2rad(360.0);
    float max_angle_height = pcl::deg2rad(360.0);
    float support_size = ui.sboxSupportSize->value();
    Eigen::Affine3f scene_sensor_pose(Eigen::Affine3f::Identity());

    scene_sensor_pose = Eigen::Affine3f(Eigen::Translation3f(cloud_dst_ptr->sensor_origin_[0],
        cloud_dst_ptr->sensor_origin_[1],
        cloud_dst_ptr->sensor_origin_[2])) *
        Eigen::Affine3f(cloud_dst_ptr->sensor_orientation_);
    //深度图
    pcl::RangeImage::CoordinateFrame coordinate_frame = pcl::RangeImage::CAMERA_FRAME;
    range_image_ptr->createFromPointCloud(*cloud_dst_ptr, angular_resolution, max_angle_width, max_angle_height,
        scene_sensor_pose, coordinate_frame, noise_level, min_range, border_size);
    range_image_ptr->setUnseenToMaxRange();
    //Narf检测对象
    pcl::NarfKeypoint narf_keypoint_detector(&range_image_border_extractor);
    range_image_border_extractor.setRangeImage(&*range_image_ptr);
    narf_keypoint_detector.getParameters().support_size = support_size;
    narf_keypoint_detector.compute(keypoint_indices);
    //narf特征点
    narf_keypoints_ptr->points.resize(keypoint_indices.points.size());
    for (size_t i = 0; i < keypoint_indices.points.size(); ++i)
        narf_keypoints_ptr->points[i].getVector3fMap() = range_image_ptr->points[keypoint_indices.points[i]].getVector3fMap();
    //可视化
    QString num_keypoints_qstr = QString::number(keypoint_indices.points.size());
    ui.lblNumKeypoints->setText(num_keypoints_qstr);
    viewer->removePointCloud("narf_keypoints");
    viewer->addPointCloud<pcl::PointXYZ>(narf_keypoints_ptr, "narf_keypoints");
    viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 7, "narf_keypoints");
    viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_COLOR, 0, 255, 0, "narf_keypoints");
    ui.qvtkWidget->update();
}

/**
 *  SLOT:提取SIFT特征点
 */
void PCLTool::siftKeypointExtraction()
{
    //参数
    float min_scale = ui.sboxMinScale->value();
    int n_octaves = ui.sboxOctaves->value();
    int n_scales_per_octave = ui.sboxOctaveScales->value();
    float min_contrast = ui.sboxMinContrast->value();
    //sift特征点提取
    sift.setInputCloud(cloud_dst_ptr);
    sift.setSearchMethod(kdtree);
    sift.setScales(min_scale, n_octaves, n_scales_per_octave);
    sift.setMinimumContrast(min_contrast);
    sift.compute(sift_keypoints);
    pcl::copyPointCloud(sift_keypoints, *cloud_temp_ptr);
    //可视化
    QString num_points_qstr = QString::number(cloud_temp_ptr->size());
    ui.lblNumKeypoints->setText(num_points_qstr);
    viewer->removePointCloud("sift_keypoints");
    viewer->addPointCloud<pcl::PointXYZ>(cloud_temp_ptr, "sift_keypoints");
    viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 7, "sift_keypoints");
    viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_COLOR, 0, 0, 255, "sift_keypoints");
    ui.qvtkWidget->update();
}

/**
 *  SLOT:提取Harris特征点
 */
void PCLTool::harrisKeypointExtraction()
{
    //参数
    float radius = ui.sboxRadius->value();
    float radiusSearch = ui.sboxRadiusSearch->value();
    //harris特征点提取
    harris.setInputCloud(cloud_dst_ptr);
    harris.setRadius(radius);
    harris.setRadiusSearch(radiusSearch);
    harris.compute(*harris_keypoints_ptr);
    pcl::copyPointCloud(*harris_keypoints_ptr, *cloud_temp_ptr);
    //可视化
    QString num_points_qstr = QString::number(cloud_temp_ptr->size());
    ui.lblNumKeypoints->setText(num_points_qstr);
    viewer->removePointCloud("harris_keypoints");
    viewer->addPointCloud<pcl::PointXYZ>(cloud_temp_ptr, "harris_keypoints");
    viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 7, "harris_keypoints");
    viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_COLOR, 255, 0, 0, "harris_keypoints");
    ui.qvtkWidget->update();
}

/**
 *  SLOT:两点云配准.加载目标点云
 */
void PCLTool::loadCloud1()
{
    QString file_name_qt = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Mesh Files(*.ply *.obj);;PCD Files(*.pcd)"));
    QFileInfo file_info(file_name_qt);
    if (!file_name_qt.isEmpty())
    {
        std::string file_name = file_name_qt.toStdString();
        QString name = file_info.fileName();
        QString suffix = file_info.suffix();
        if (suffix == "pcd")
        {
            pcl::io::loadPCDFile(file_name, *cloud_tgt_ptr);
        }
        else
        {
            Mesh2PCD* transformer = new Mesh2PCD();
            *cloud_tgt_ptr = *transformer->Transform(file_name, ui.sboxRegLeafSize->value());
            delete transformer;
        }
        ui.lblCloud1Name->setText(name);
        QString num_points_qstr = QString::number(cloud_tgt_ptr->size());
        ui.lblNumPointsCloud1->setText(num_points_qstr);

        grid.setLeafSize(0.003, 0.003, 0.003);
        grid.setInputCloud(cloud_tgt_ptr);
        grid.filter(*cloud_tgt_ptr_grid1);
        QString num_points_qstr1 = QString::number(cloud_tgt_ptr_grid1->size());
        ui.lblNumPointsCloud1Grid1->setText(num_points_qstr1);

        grid.setLeafSize(0.005, 0.005, 0.005);
        grid.setInputCloud(cloud_tgt_ptr);
        grid.filter(*cloud_tgt_ptr_grid2);
        QString num_points_qstr2 = QString::number(cloud_tgt_ptr_grid2->size());
        ui.lblNumPointsCloud1Grid2->setText(num_points_qstr2);
        
        pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> cloud1_color(cloud_tgt_ptr, 255, 0, 0);
        viewer->removePointCloud("cloud1");
        viewer->addPointCloud(cloud_tgt_ptr, cloud1_color, "cloud1");
        ui.qvtkWidget->update();
    }
}

/**
 *  SLOT:两点云配准.加载输入点云
 */
void PCLTool::loadCloud2()
{
    QString file_name_qt = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Mesh Files(*.ply *.obj);;PCD Files(*.pcd)"));
    QFileInfo file_info(file_name_qt);
    if (!file_name_qt.isEmpty())
    {
        std::string file_name = file_name_qt.toStdString();
        QString name = file_info.fileName();
        QString suffix = file_info.suffix();
        if (suffix == "pcd")
        {
            pcl::io::loadPCDFile(file_name, *cloud_input_ptr);
        }
        else
        {
            Mesh2PCD* transformer = new Mesh2PCD();
            *cloud_input_ptr = *transformer->Transform(file_name, ui.sboxRegLeafSize->value());
            delete transformer;
        }
        
        ui.lblCloud2Name->setText(name);
        QString num_points_qstr = QString::number(cloud_input_ptr->size());
        ui.lblNumPointsCloud2->setText(num_points_qstr);

        grid.setLeafSize(0.003, 0.003, 0.003);
        grid.setInputCloud(cloud_input_ptr);
        grid.filter(*cloud_input_ptr_grid1);
        QString num_points_qstr1 = QString::number(cloud_input_ptr_grid1->size());
        ui.lblNumPointsCloud2Grid1->setText(num_points_qstr1);

        grid.setLeafSize(0.005, 0.005, 0.005);
        grid.setInputCloud(cloud_input_ptr);
        grid.filter(*cloud_input_ptr_grid2);
        QString num_points_qstr2 = QString::number(cloud_input_ptr_grid2->size());
        ui.lblNumPointsCloud2Grid2->setText(num_points_qstr2);

        pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> cloud2_color(cloud_input_ptr, 0, 255, 0);
        viewer->removePointCloud("cloud2");
        viewer->addPointCloud(cloud_input_ptr, cloud2_color, "cloud2");
        ui.qvtkWidget->update();
    }
}

/**
 *  SLOT:两点云配准
 */
void PCLTool::doRegistration()
{
    clock_t start_time = clock();
    float ndt_leaf_size = ui.sboxNDTLeafSize->value();
    float icp_leaf_size = ui.sboxICPLeafSize->value();

    pcl::VoxelGrid<pcl::PointXYZ> voxel_grid_ndt;
    voxel_grid_ndt.setLeafSize(ndt_leaf_size, ndt_leaf_size, ndt_leaf_size);
    voxel_grid_ndt.setInputCloud(cloud_input_ptr);
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_ndt_o2(new pcl::PointCloud<pcl::PointXYZ>);
    voxel_grid_ndt.filter(*cloud_ndt_o2);

    //ndt粗配准
    pcl::NormalDistributionsTransform<pcl::PointXYZ, pcl::PointXYZ> ndt;
    ndt.setTransformationEpsilon(ui.sboxEpsilon->value());
    ndt.setStepSize(ui.sboxNDTStepSize->value());
    ndt.setResolution(ui.sboxNDTResolution->value());
    ndt.setMaximumIterations(ui.sboxIterations->value());
    ndt.setInputSource(cloud_ndt_o2);
    ndt.setInputTarget(cloud_tgt_ptr);
    ndt.align(*cloud_registrated_ptr);
    pcl::transformPointCloud(*cloud_input_ptr, *cloud_registrated_ptr, ndt.getFinalTransformation());

    pcl::VoxelGrid<pcl::PointXYZ> voxel_grid_icp;
    voxel_grid_icp.setLeafSize(icp_leaf_size, icp_leaf_size, icp_leaf_size);
    voxel_grid_icp.setInputCloud(cloud_input_ptr);
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_icp_input(new pcl::PointCloud<pcl::PointXYZ>);
    voxel_grid_icp.filter(*cloud_icp_input);

    //icp精配准
    pcl::IterativeClosestPoint<pcl::PointXYZ, pcl::PointXYZ> icp;
    pcl::search::KdTree<pcl::PointXYZ>::Ptr tree1(new pcl::search::KdTree<pcl::PointXYZ>);
    tree1->setInputCloud(cloud_icp_input);
    pcl::search::KdTree<pcl::PointXYZ>::Ptr tree2(new pcl::search::KdTree<pcl::PointXYZ>);
    tree2->setInputCloud(cloud_tgt_ptr);
    icp.setSearchMethodSource(tree1);
    icp.setSearchMethodTarget(tree2);
    icp.setInputSource(cloud_icp_input);
    icp.setInputTarget(cloud_tgt_ptr);
    icp.setMaxCorrespondenceDistance(ui.sboxCorreDistance->value());
    icp.setTransformationEpsilon(1e-10);
    icp.setEuclideanFitnessEpsilon(ui.sboxEpsilonICP->value());
    icp.setMaximumIterations(ui.xboxIterationsICP->value());
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_registrated_ptr_icp(new pcl::PointCloud<pcl::PointXYZ>);
    icp.align(*cloud_registrated_ptr_icp, ndt.getFinalTransformation());

    //计算时间
    clock_t end_time = clock();
    QString time = QString("%1s").arg((double)(end_time - start_time) / CLOCKS_PER_SEC);
    ui.lblRegTime->setText(time);

    Eigen::Matrix4f transformation_icp = icp.getFinalTransformation();
    pcl::transformPointCloud(*cloud_input_ptr, *cloud_registrated_ptr_icp, transformation_icp);

    //可视化
    pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> cloud_registrated_color(cloud_registrated_ptr, 0, 0, 255);
    pcl::visualization::PointCloudColorHandlerCustom<pcl::PointXYZ> cloud_registrated_color_icp(cloud_registrated_ptr_icp, 200, 0, 255);

    viewer->removePointCloud("cloud_registrated_ndt");
    viewer->addPointCloud(cloud_registrated_ptr, cloud_registrated_color, "cloud_registrated_ndt");
    
    viewer->removePointCloud("cloud_registrated");
    viewer->addPointCloud(cloud_registrated_ptr_icp, cloud_registrated_color_icp, "cloud_registrated");
    ui.qvtkWidget->update();
    showRegMsgs(cloud_tgt_ptr, cloud_registrated_ptr_icp);
}
