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

    //ԭʼ��������
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_src_ptr;
    //������������
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_dst_ptr;
    //narf�ؼ������
    pcl::PointCloud<pcl::PointXYZ>::Ptr narf_keypoints_ptr;
    //sift�ؼ������
    pcl::PointCloud<pcl::PointWithScale> sift_keypoints;
    //harris�ؼ������
    pcl::PointCloud<pcl::PointXYZI>::Ptr harris_keypoints_ptr;
    //ת����������
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_temp_ptr;
    //kdTree
    pcl::search::KdTree<pcl::PointXYZ>::Ptr kdtree;
    //���ͼ
    pcl::RangeImage::Ptr range_image_ptr;
    //���������С����
    pcl::PointXYZ min_p, max_p;
    //���ƿ��ӻ�����
    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;
    //VoxelGrid�²�������
    pcl::VoxelGrid<pcl::PointXYZ> grid;
    //��Ⱥ���˲�������
    pcl::StatisticalOutlierRemoval<pcl::PointXYZ> sor;
    //��ȡ���ͼ��Ե����
    pcl::RangeImageBorderExtractor range_image_border_extractor;
    //NARF�ؼ���indices
    pcl::PointCloud<int> keypoint_indices;
    //SIFT�ؼ��������
    pcl::SIFTKeypoint<pcl::PointXYZ, pcl::PointWithScale> sift;
    //Harris3D�ؼ��������
    pcl::HarrisKeypoint3D<pcl::PointXYZ, pcl::PointXYZI, pcl::Normal> harris;
    //��׼Ŀ�����
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_tgt_ptr;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_tgt_ptr_grid1;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_tgt_ptr_grid2;
    //����׼����
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_input_ptr;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_input_ptr_grid1;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_input_ptr_grid2;
    //��׼�������
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
