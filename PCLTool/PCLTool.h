#pragma once

#include <QtWidgets/QMainWindow>
#include <pcl/io/pcd_io.h>
#include <pcl/common/common.h>
#include <pcl/features/normal_3d.h>
#include <pcl/features/range_image_border_extractor.h>
#include <pcl/point_types.h>    
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/visualization/range_image_visualizer.h>
#include <pcl/range_image/range_image.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <pcl/keypoints/narf_keypoint.h>
#include "ui_PCLTool.h"


class PCLTool : public QMainWindow
{
    Q_OBJECT

public:
    PCLTool(QWidget *parent = Q_NULLPTR);

private:
    Ui::PCLToolClass ui;

    //ԭʼ��������
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_src;
    //�˲����������
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_dst;
    //�ؼ������
    pcl::PointCloud<pcl::PointXYZ>::Ptr keypoints_ptr;
    //���ͼ
    pcl::RangeImage::Ptr range_image_ptr;
    //���������С����
    pcl::PointXYZ min_p, max_p;
    //���ƿ��ӻ�����
    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;
    //��Ⱥ���˲�������
    pcl::StatisticalOutlierRemoval<pcl::PointXYZ> sor;
    //��ȡ���ͼ��Ե����
    pcl::RangeImageBorderExtractor range_image_border_extractor;
    //�ؼ���indices
    pcl::PointCloud<int> keypoint_indices;
    void initialVtkWidget();
    void showCloudMsgs(pcl::PointCloud<pcl::PointXYZ>::Ptr input_cloud);

private slots:
    void openFile();
    void outlierRemoval();
    void narfKeypointExtraction();
};
