#pragma once
#include <librealsense2/rs.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <QDebug>

class RSCamera 
{
public:
	RSCamera();
	~RSCamera();
	pcl::PointCloud<pcl::PointXYZ>::Ptr getPointCloud(rs2::pipeline pipe);

private:
	pcl::PointCloud<pcl::PointXYZ>::Ptr points_to_pcl(const rs2::points& points);
};

