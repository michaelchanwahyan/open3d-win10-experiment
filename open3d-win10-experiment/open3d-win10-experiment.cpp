// open3d-win10-experiment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include <thread>
#include <Eigen/Dense>

#include <Core/Core.h>
#include <IO/IO.h>
#include <Visualization/Visualization.h>

#include <Core/Utility/Timer.h>
#include <Core/Utility/Console.h>

using namespace open3d;

void PrintVoxelGridInformation(const VoxelGrid& voxel_grid) {
	std::cout << "VoxelGrid with " << voxel_grid.voxels_.size() << " voxels\n";
	std::cout << "               origin: " << voxel_grid.origin_(0) << ", "
		                                   << voxel_grid.origin_(1) << ", "
		                                   << voxel_grid.origin_(2) << "\n";
	std::cout << "               voxel_size: " << voxel_grid.voxel_size_ << "\n";
	return;
}

void PrintPointCloudInformation(const PointCloud& point_cloud) {
	std::cout << "point cloud with " << point_cloud.points_.size() << "points\n";
	Eigen::Vector3d minbnd, maxbnd;
	minbnd = point_cloud.GetMinBound();
	maxbnd = point_cloud.GetMaxBound();
	std::cout << "point cloud minimum bound is " << minbnd << "\n";
	std::cout << "point cloud maximum bound is " << maxbnd << "\n";
	return;
}

int main()
{
	using namespace open3d;
    std::cout << "Welcome to Open3D!\n"; 

	SetVerbosityLevel(VerbosityLevel::VerboseAlways);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
