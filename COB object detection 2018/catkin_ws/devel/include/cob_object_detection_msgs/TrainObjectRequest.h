// Generated by gencpp from file cob_object_detection_msgs/TrainObjectRequest.msg
// DO NOT EDIT!


#ifndef COB_OBJECT_DETECTION_MSGS_MESSAGE_TRAINOBJECTREQUEST_H
#define COB_OBJECT_DETECTION_MSGS_MESSAGE_TRAINOBJECTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_object_detection_msgs
{
template <class ContainerAllocator>
struct TrainObjectRequest_
{
  typedef TrainObjectRequest_<ContainerAllocator> Type;

  TrainObjectRequest_()
    : object_name()  {
    }
  TrainObjectRequest_(const ContainerAllocator& _alloc)
    : object_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _object_name_type;
  _object_name_type object_name;




  typedef boost::shared_ptr< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TrainObjectRequest_

typedef ::cob_object_detection_msgs::TrainObjectRequest_<std::allocator<void> > TrainObjectRequest;

typedef boost::shared_ptr< ::cob_object_detection_msgs::TrainObjectRequest > TrainObjectRequestPtr;
typedef boost::shared_ptr< ::cob_object_detection_msgs::TrainObjectRequest const> TrainObjectRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_object_detection_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'cob_object_detection_msgs': ['/home/prankit/Documents/hearts_vision/COB object detection 2018/catkin_ws/devel/share/cob_object_detection_msgs/msg', '/home/prankit/Documents/hearts_vision/COB object detection 2018/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2f12226348d323c2e5b2031b3da53f1b";
  }

  static const char* value(const ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2f12226348d323c2ULL;
  static const uint64_t static_value2 = 0xe5b2031b3da53f1bULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_object_detection_msgs/TrainObjectRequest";
  }

  static const char* value(const ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string object_name\n\
";
  }

  static const char* value(const ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.object_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrainObjectRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_object_detection_msgs::TrainObjectRequest_<ContainerAllocator>& v)
  {
    s << indent << "object_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.object_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_OBJECT_DETECTION_MSGS_MESSAGE_TRAINOBJECTREQUEST_H
