// Code generated by a template
#pragma once
#include "..\export.h"

#include <pcl/pcl_base.h>
#include <pcl/point_types.h>

using namespace pcl;
using namespace std;

typedef shared_ptr<PointCloud<PointXYZRGBA>> boost_cloud;

#ifdef __cplusplus
extern "C" {
#endif 

EXPORT(void) pclbase_xyzrgba_setInputCloud(PCLBase<PointXYZRGBA>* ptr, PointCloud<PointXYZRGBA>* cloud)
{
	ptr->setInputCloud(boost_cloud(boost_cloud(), cloud));
}

EXPORT(void) pclbase_xyzrgba_setIndices(PCLBase<PointXYZRGBA>* ptr, vector<int>* indices)
{
	ptr->setIndices(shared_ptr<vector<int>>(shared_ptr<vector<int>>(), indices));
}

EXPORT(const PointXYZRGBA*) pclbase_xyzrgba_indexGet(PCLBase<PointXYZRGBA>* ptr, int idx)
{ return &ptr->operator[](idx); }

#ifdef __cplusplus  
}
#endif  
