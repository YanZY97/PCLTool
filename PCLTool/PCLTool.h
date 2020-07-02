#pragma once

#include <QtWidgets/QMainWindow>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h> 
#include <pcl/common/common.h>
#include <pcl/features/normal_3d.h>
#include <pcl/features/range_image_border_extractor.h>
#include <pcl/range_image/range_image.h>
#include <pcl/keypoints/narf_keypoint.h>
#include <pcl/keypoints/sift_keypoint.h>
#include <pcl/keypoints/harris_3d.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/visualization/range_image_visualizer.h>
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
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_src;
    //滤波后点云数据
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_dst;
    //narf关键点点云
    pcl::PointCloud<pcl::PointXYZ>::Ptr narf_keypoints_ptr;
    //sift关键点点云
    pcl::PointCloud<pcl::PointWithScale> sift_keypoints;
    //harris关键点点云
    pcl::PointCloud<pcl::PointXYZI>::Ptr harris_keypoints_ptr;
    //转换点云类型
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_temp;
    //kdTree
    pcl::search::KdTree<pcl::PointXYZ>::Ptr tree;
    //深度图
    pcl::RangeImage::Ptr range_image_ptr;
    //点云最大最小坐标
    pcl::PointXYZ min_p, max_p;
    //点云可视化窗口
    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;
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

    void initialVtkWidget();
    void showCloudMsgs(pcl::PointCloud<pcl::PointXYZ>::Ptr input_cloud);

private slots:
    void openFile();
    void outlierRemoval();
    void narfKeypointExtraction();
    void siftKeypointExtraction();
    void harrisKeypointExtraction();
};
