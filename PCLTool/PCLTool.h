#pragma once

#include <QtWidgets/QMainWindow>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>    
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/features/normal_3d.h>
#include <pcl/common/common.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include "ui_PCLTool.h"


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
    //点云最大最小坐标
    pcl::PointXYZ min_p, max_p;
    //点云可视化窗口
    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;
    //离群点滤波器对象
    pcl::StatisticalOutlierRemoval<pcl::PointXYZ> sor;

    void initialVtkWidget();
    void showCloudMsgs(pcl::PointCloud<pcl::PointXYZ>::Ptr input_cloud);

private slots:
    void openFile();
    void outlierRemoval();
};
