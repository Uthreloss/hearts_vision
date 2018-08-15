// Generated by gencpp from file cob_object_detection_msgs/BaTestEnvironmentRequest.msg
// DO NOT EDIT!


#ifndef COB_OBJECT_DETECTION_MSGS_MESSAGE_BATESTENVIRONMENTREQUEST_H
#define COB_OBJECT_DETECTION_MSGS_MESSAGE_BATESTENVIRONMENTREQUEST_H


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
struct BaTestEnvironmentRequest_
{
  typedef BaTestEnvironmentRequest_<ContainerAllocator> Type;

  BaTestEnvironmentRequest_()
    : number_points(0)
    , frame_view_number(0.0)
    , cone_points_per_plane(0.0)
    , limit_error_matching(0.0)
    , ba_kernel_param(0.0)
    , ba_num_iter(0)
    , ba_initial_mu(0.0)
    , ba_final_mu_factor(0.0)
    , ba_tau(0.0)
    , angle_sigma_degree(0.0)
    , translate_sigma_m(0.0)
    , obs_point_sigma_m(0.0)
    , world_point_sigma_m(0.0)  {
    }
  BaTestEnvironmentRequest_(const ContainerAllocator& _alloc)
    : number_points(0)
    , frame_view_number(0.0)
    , cone_points_per_plane(0.0)
    , limit_error_matching(0.0)
    , ba_kernel_param(0.0)
    , ba_num_iter(0)
    , ba_initial_mu(0.0)
    , ba_final_mu_factor(0.0)
    , ba_tau(0.0)
    , angle_sigma_degree(0.0)
    , translate_sigma_m(0.0)
    , obs_point_sigma_m(0.0)
    , world_point_sigma_m(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _number_points_type;
  _number_points_type number_points;

   typedef float _frame_view_number_type;
  _frame_view_number_type frame_view_number;

   typedef float _cone_points_per_plane_type;
  _cone_points_per_plane_type cone_points_per_plane;

   typedef float _limit_error_matching_type;
  _limit_error_matching_type limit_error_matching;

   typedef float _ba_kernel_param_type;
  _ba_kernel_param_type ba_kernel_param;

   typedef int32_t _ba_num_iter_type;
  _ba_num_iter_type ba_num_iter;

   typedef float _ba_initial_mu_type;
  _ba_initial_mu_type ba_initial_mu;

   typedef float _ba_final_mu_factor_type;
  _ba_final_mu_factor_type ba_final_mu_factor;

   typedef float _ba_tau_type;
  _ba_tau_type ba_tau;

   typedef float _angle_sigma_degree_type;
  _angle_sigma_degree_type angle_sigma_degree;

   typedef float _translate_sigma_m_type;
  _translate_sigma_m_type translate_sigma_m;

   typedef float _obs_point_sigma_m_type;
  _obs_point_sigma_m_type obs_point_sigma_m;

   typedef float _world_point_sigma_m_type;
  _world_point_sigma_m_type world_point_sigma_m;




  typedef boost::shared_ptr< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BaTestEnvironmentRequest_

typedef ::cob_object_detection_msgs::BaTestEnvironmentRequest_<std::allocator<void> > BaTestEnvironmentRequest;

typedef boost::shared_ptr< ::cob_object_detection_msgs::BaTestEnvironmentRequest > BaTestEnvironmentRequestPtr;
typedef boost::shared_ptr< ::cob_object_detection_msgs::BaTestEnvironmentRequest const> BaTestEnvironmentRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_object_detection_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'cob_object_detection_msgs': ['/home/prankit/Documents/hearts_vision/COB object detection 2018/catkin_ws/devel/share/cob_object_detection_msgs/msg', '/home/prankit/Documents/hearts_vision/COB object detection 2018/catkin_ws/src/cob_perception_common/cob_object_detection_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65aeb9eaa6cbc248861e82cf7f7464c0";
  }

  static const char* value(const ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65aeb9eaa6cbc248ULL;
  static const uint64_t static_value2 = 0x861e82cf7f7464c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_object_detection_msgs/BaTestEnvironmentRequest";
  }

  static const char* value(const ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
int32 number_points\n\
float32 frame_view_number\n\
float32 cone_points_per_plane\n\
\n\
\n\
float32 limit_error_matching\n\
\n\
float32 ba_kernel_param\n\
int32 ba_num_iter\n\
float32 ba_initial_mu\n\
float32 ba_final_mu_factor\n\
float32 ba_tau\n\
\n\
float32 angle_sigma_degree\n\
float32 translate_sigma_m\n\
float32 obs_point_sigma_m\n\
float32 world_point_sigma_m\n\
\n\
";
  }

  static const char* value(const ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.number_points);
      stream.next(m.frame_view_number);
      stream.next(m.cone_points_per_plane);
      stream.next(m.limit_error_matching);
      stream.next(m.ba_kernel_param);
      stream.next(m.ba_num_iter);
      stream.next(m.ba_initial_mu);
      stream.next(m.ba_final_mu_factor);
      stream.next(m.ba_tau);
      stream.next(m.angle_sigma_degree);
      stream.next(m.translate_sigma_m);
      stream.next(m.obs_point_sigma_m);
      stream.next(m.world_point_sigma_m);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BaTestEnvironmentRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_object_detection_msgs::BaTestEnvironmentRequest_<ContainerAllocator>& v)
  {
    s << indent << "number_points: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number_points);
    s << indent << "frame_view_number: ";
    Printer<float>::stream(s, indent + "  ", v.frame_view_number);
    s << indent << "cone_points_per_plane: ";
    Printer<float>::stream(s, indent + "  ", v.cone_points_per_plane);
    s << indent << "limit_error_matching: ";
    Printer<float>::stream(s, indent + "  ", v.limit_error_matching);
    s << indent << "ba_kernel_param: ";
    Printer<float>::stream(s, indent + "  ", v.ba_kernel_param);
    s << indent << "ba_num_iter: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ba_num_iter);
    s << indent << "ba_initial_mu: ";
    Printer<float>::stream(s, indent + "  ", v.ba_initial_mu);
    s << indent << "ba_final_mu_factor: ";
    Printer<float>::stream(s, indent + "  ", v.ba_final_mu_factor);
    s << indent << "ba_tau: ";
    Printer<float>::stream(s, indent + "  ", v.ba_tau);
    s << indent << "angle_sigma_degree: ";
    Printer<float>::stream(s, indent + "  ", v.angle_sigma_degree);
    s << indent << "translate_sigma_m: ";
    Printer<float>::stream(s, indent + "  ", v.translate_sigma_m);
    s << indent << "obs_point_sigma_m: ";
    Printer<float>::stream(s, indent + "  ", v.obs_point_sigma_m);
    s << indent << "world_point_sigma_m: ";
    Printer<float>::stream(s, indent + "  ", v.world_point_sigma_m);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_OBJECT_DETECTION_MSGS_MESSAGE_BATESTENVIRONMENTREQUEST_H
