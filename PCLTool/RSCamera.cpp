#include "RSCamera.h"
#include <pcl\filters\passthrough.h>

RSCamera::RSCamera()
{
}

RSCamera::~RSCamera() 
{
}

pcl::PointCloud<pcl::PointXYZ>::Ptr RSCamera::getPointCloud(rs2::pipeline pipe)
{
    rs2::pointcloud pc;
    rs2::points points;
    auto frames = pipe.wait_for_frames();
    auto depth = frames.get_depth_frame();
    points = pc.calculate(depth);
    pcl::PointCloud<pcl::PointXYZ>::Ptr pcl_points = points_to_pcl(points);
    return pcl_points;
}

pcl::PointCloud<pcl::PointXYZ>::Ptr RSCamera::points_to_pcl(const rs2::points& points)
{
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);

    auto sp = points.get_profile().as<rs2::video_stream_profile>();
    cloud->width = sp.width();
    cloud->height = sp.height();
    cloud->is_dense = false;
    cloud->points.resize(points.size());
    auto ptr = points.get_vertices();
    for (auto& p : cloud->points)
    {
        p.x = ptr->x;
        p.y = -ptr->y;
        p.z = -ptr->z;
        ptr++;
    }
    return cloud;
}

