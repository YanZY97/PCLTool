#pragma once

#include <QtWidgets/QMainWindow>
#include <QDebug>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h> 
#include <pcl/common/common.h>
#include <pcl/features/normal_3d.h>
#include <pcl/features/normal_3d_omp.h>
#include <pcl/features/fpfh.h>
#include <pcl/features/fpfh_omp.h>
#include <pcl/features/vfh.h>
#include <pcl/features/range_image_border_extractor.h>
#include <pcl/range_image/range_image.h>
#include <pcl/keypoints/narf_keypoint.h>
#include <pcl/keypoints/sift_keypoint.h>
#include <pcl/keypoints/harris_3d.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/visualization/range_image_visualizer.h>
#include <pcl/registration/ia_ransac.h>
#include <pcl/registration/ndt.h>
#include <pcl/registration/icp.h>
#include "ui_PCLTool.h"

namespace pcl
{
    template<>
    struct SIFTKeypointFieldSelector<PointXYZ>
    {
        inline float
            operator () (const PointXYZ& p) const
        {
            return p.z;
        }
    };
}

class PCLTool : public QMainWindow
{
    Q_OBJECT

public:
    PCLTool(QWidget *parent = Q_NULLPTR);

private:
    Ui::PCLToolClass ui;

    //原始点云数据
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_src_ptr;
    //处理后点云数据
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_dst_ptr;
    //narf关键点点云
    pcl::PointCloud<pcl::PointXYZ>::Ptr narf_keypoints_ptr;
    //sift关键点点云
    pcl::PointCloud<pcl::PointWithScale> sift_keypoints;
    //harris关键点点云
    pcl::PointCloud<pcl::PointXYZI>::Ptr harris_keypoints_ptr;
    //转换点云类型
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_temp_ptr;
    //kdTree
    pcl::search::KdTree<pcl::PointXYZ>::Ptr kdtree;
    //深度图
    pcl::RangeImage::Ptr range_image_ptr;
    //点云最大最小坐标
    pcl::PointXYZ min_p, max_p;
    //点云可视化窗口
    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;
    //VoxelGrid下采样对象
    pcl::VoxelGrid<pcl::PointXYZ> grid;
    //离群点滤波器对象
    pcl::StatisticalOutlierRemoval<pcl::PointXYZ> sor;
    //提取深度图边缘对象
    pcl::RangeImageBorderExtractor range_image_border_extractor;
    //NARF关键点indices
    pcl::PointCloud<int> keypoint_indices;
    //SIFT关键点检测对象
    pcl::SIFTKeypoint<pcl::PointXYZ, pcl::PointWithScale> sift;
    //Harris3D关键点检测对象
    pcl::HarrisKeypoint3D<pcl::PointXYZ, pcl::PointXYZI, pcl::Normal> harris;
    //配准目标点云
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_tgt_ptr;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_tgt_ptr_grid1;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_tgt_ptr_grid2;
    //待配准点云
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_input_ptr;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_input_ptr_grid1;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_input_ptr_grid2;
    //配准结果点云
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_registrated_ptr;

    void initialVtkWidget();
    void showCloudMsgs(pcl::PointCloud<pcl::PointXYZ>::Ptr input_cloud);
    void showRegMsgs(pcl::PointCloud<pcl::PointXYZ>::Ptr input_cloud, pcl::PointCloud<pcl::PointXYZ>::Ptr input_cloud2);

private slots:
    void openFile();
    void openMeshFile();

    void voxelGrid();
    void outlierRemoval();

    void narfKeypointExtraction();
    void siftKeypointExtraction();
    void harrisKeypointExtraction();

    void loadCloud1();
    void loadCloud2();
    void doRegistration();
};
