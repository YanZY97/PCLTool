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

    //ԭʼ��������
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_src;
    //�˲����������
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_dst;
    //���������С����
    pcl::PointXYZ min_p, max_p;
    //���ƿ��ӻ�����
    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;
    //��Ⱥ���˲�������
    pcl::StatisticalOutlierRemoval<pcl::PointXYZ> sor;

    void initialVtkWidget();
    void showCloudMsgs(pcl::PointCloud<pcl::PointXYZ>::Ptr input_cloud);

private slots:
    void openFile();
    void outlierRemoval();
};
