// Generated by gencpp from file cob_object_detection_msgs/AcquireObjectImage.msg
// DO NOT EDIT!


#ifndef COB_OBJECT_DETECTION_MSGS_MESSAGE_ACQUIREOBJECTIMAGE_H
#define COB_OBJECT_DETECTION_MSGS_MESSAGE_ACQUIREOBJECTIMAGE_H

#include <ros/service_traits.h>


#include <cob_object_detection_msgs/AcquireObjectImageRequest.h>
#include <cob_object_detection_msgs/AcquireObjectImageResponse.h>


namespace cob_object_detection_msgs
{

struct AcquireObjectImage
{

typedef AcquireObjectImageRequest Request;
typedef AcquireObjectImageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AcquireObjectImage
} // namespace cob_object_detection_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_object_detection_msgs::AcquireObjectImage > {
  static const char* value()
  {
    return "a834da64b488488418ecf10d2737befd";
  }

  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImage&) { return value(); }
};

template<>
struct DataType< ::cob_object_detection_msgs::AcquireObjectImage > {
  static const char* value()
  {
    return "cob_object_detection_msgs/AcquireObjectImage";
  }

  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImage&) { return value(); }
};


// service_traits::MD5Sum< ::cob_object_detection_msgs::AcquireObjectImageRequest> should match 
// service_traits::MD5Sum< ::cob_object_detection_msgs::AcquireObjectImage > 
template<>
struct MD5Sum< ::cob_object_detection_msgs::AcquireObjectImageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_object_detection_msgs::AcquireObjectImage >::value();
  }
  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_object_detection_msgs::AcquireObjectImageRequest> should match 
// service_traits::DataType< ::cob_object_detection_msgs::AcquireObjectImage > 
template<>
struct DataType< ::cob_object_detection_msgs::AcquireObjectImageRequest>
{
  static const char* value()
  {
    return DataType< ::cob_object_detection_msgs::AcquireObjectImage >::value();
  }
  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_object_detection_msgs::AcquireObjectImageResponse> should match 
// service_traits::MD5Sum< ::cob_object_detection_msgs::AcquireObjectImage > 
template<>
struct MD5Sum< ::cob_object_detection_msgs::AcquireObjectImageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_object_detection_msgs::AcquireObjectImage >::value();
  }
  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_object_detection_msgs::AcquireObjectImageResponse> should match 
// service_traits::DataType< ::cob_object_detection_msgs::AcquireObjectImage > 
template<>
struct DataType< ::cob_object_detection_msgs::AcquireObjectImageResponse>
{
  static const char* value()
  {
    return DataType< ::cob_object_detection_msgs::AcquireObjectImage >::value();
  }
  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_OBJECT_DETECTION_MSGS_MESSAGE_ACQUIREOBJECTIMAGE_H