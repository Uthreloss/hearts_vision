// Generated by gencpp from file cob_3d_mapping_msgs/GetApproachPoseForPolygon.msg
// DO NOT EDIT!


#ifndef COB_3D_MAPPING_MSGS_MESSAGE_GETAPPROACHPOSEFORPOLYGON_H
#define COB_3D_MAPPING_MSGS_MESSAGE_GETAPPROACHPOSEFORPOLYGON_H

#include <ros/service_traits.h>


#include <cob_3d_mapping_msgs/GetApproachPoseForPolygonRequest.h>
#include <cob_3d_mapping_msgs/GetApproachPoseForPolygonResponse.h>


namespace cob_3d_mapping_msgs
{

struct GetApproachPoseForPolygon
{

typedef GetApproachPoseForPolygonRequest Request;
typedef GetApproachPoseForPolygonResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetApproachPoseForPolygon
} // namespace cob_3d_mapping_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_3d_mapping_msgs::GetApproachPoseForPolygon > {
  static const char* value()
  {
    return "2e4a014d60955a8917ce409cfc03b74d";
  }

  static const char* value(const ::cob_3d_mapping_msgs::GetApproachPoseForPolygon&) { return value(); }
};

template<>
struct DataType< ::cob_3d_mapping_msgs::GetApproachPoseForPolygon > {
  static const char* value()
  {
    return "cob_3d_mapping_msgs/GetApproachPoseForPolygon";
  }

  static const char* value(const ::cob_3d_mapping_msgs::GetApproachPoseForPolygon&) { return value(); }
};


// service_traits::MD5Sum< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonRequest> should match 
// service_traits::MD5Sum< ::cob_3d_mapping_msgs::GetApproachPoseForPolygon > 
template<>
struct MD5Sum< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_3d_mapping_msgs::GetApproachPoseForPolygon >::value();
  }
  static const char* value(const ::cob_3d_mapping_msgs::GetApproachPoseForPolygonRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonRequest> should match 
// service_traits::DataType< ::cob_3d_mapping_msgs::GetApproachPoseForPolygon > 
template<>
struct DataType< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonRequest>
{
  static const char* value()
  {
    return DataType< ::cob_3d_mapping_msgs::GetApproachPoseForPolygon >::value();
  }
  static const char* value(const ::cob_3d_mapping_msgs::GetApproachPoseForPolygonRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse> should match 
// service_traits::MD5Sum< ::cob_3d_mapping_msgs::GetApproachPoseForPolygon > 
template<>
struct MD5Sum< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_3d_mapping_msgs::GetApproachPoseForPolygon >::value();
  }
  static const char* value(const ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse> should match 
// service_traits::DataType< ::cob_3d_mapping_msgs::GetApproachPoseForPolygon > 
template<>
struct DataType< ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse>
{
  static const char* value()
  {
    return DataType< ::cob_3d_mapping_msgs::GetApproachPoseForPolygon >::value();
  }
  static const char* value(const ::cob_3d_mapping_msgs::GetApproachPoseForPolygonResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_3D_MAPPING_MSGS_MESSAGE_GETAPPROACHPOSEFORPOLYGON_H