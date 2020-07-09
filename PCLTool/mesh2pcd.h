#pragma once
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/vtk_lib_io.h>
#include <pcl/common/transforms.h>
#include <vtkVersion.h>
#include <vtkPLYReader.h>
#include <vtkOBJReader.h>
#include <vtkTriangle.h>
#include <vtkPolyDataMapper.h>
#include <vtkTriangleFilter.h>
#include <pcl/filters/voxel_grid.h>
#include <QDebug>

class Mesh2PCD
{
public:
	Mesh2PCD();
	~Mesh2PCD();
	pcl::PointCloud<pcl::PointXYZ>::Ptr Transform(std::string file_path, float leaf_size);
private:
	void uniform_sampling(vtkSmartPointer<vtkPolyData> polydata, std::size_t n_samples, bool calc_normal, bool calc_color, 
		pcl::PointCloud<pcl::PointXYZRGBNormal>& cloud_out);
	void randomPointTriangle(float a1, float a2, float a3, float b1, float b2, float b3, float c1, float c2, float c3,
		float r1, float r2, Eigen::Vector3f& p);
	void randPSurface(vtkPolyData* polydata, std::vector<double>* cumulativeAreas, double totalArea, Eigen::Vector3f& p,
		bool calcNormal, Eigen::Vector3f& n, bool calcColor, Eigen::Vector3f& c);
	double uniform_deviate(int seed);
	std::string file_path;
	vtkSmartPointer<vtkPLYReader> plyReaderQuery;
	vtkSmartPointer<vtkOBJReader> objReaderQuery;
	vtkSmartPointer<vtkPolyData> polydata1;
	pcl::PointCloud<pcl::PointXYZRGBNormal>::Ptr cloud_1;
	pcl::PointCloud<pcl::PointXYZ>::Ptr pcd_cloud;
	pcl::VoxelGrid<pcl::PointXYZ> grid;
};

