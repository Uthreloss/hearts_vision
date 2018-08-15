// Generated by gencpp from file cob_object_detection_msgs/AcquireObjectImageAction.msg
// DO NOT EDIT!


#ifndef COB_OBJECT_DETECTION_MSGS_MESSAGE_ACQUIREOBJECTIMAGEACTION_H
#define COB_OBJECT_DETECTION_MSGS_MESSAGE_ACQUIREOBJECTIMAGEACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cob_object_detection_msgs/AcquireObjectImageActionGoal.h>
#include <cob_object_detection_msgs/AcquireObjectImageActionResult.h>
#include <cob_object_detection_msgs/AcquireObjectImageActionFeedback.h>

namespace cob_object_detection_msgs
{
template <class ContainerAllocator>
struct AcquireObjectImageAction_
{
  typedef AcquireObjectImageAction_<ContainerAllocator> Type;

  AcquireObjectImageAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  AcquireObjectImageAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::cob_object_detection_msgs::AcquireObjectImageActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::cob_object_detection_msgs::AcquireObjectImageActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::cob_object_detection_msgs::AcquireObjectImageActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> const> ConstPtr;

}; // struct AcquireObjectImageAction_

typedef ::cob_object_detection_msgs::AcquireObjectImageAction_<std::allocator<void> > AcquireObjectImageAction;

typedef boost::shared_ptr< ::cob_object_detection_msgs::AcquireObjectImageAction > AcquireObjectImageActionPtr;
typedef boost::shared_ptr< ::cob_object_detection_msgs::AcquireObjectImageAction const> AcquireObjectImageActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "089df8c12f43ce82ba50ba0d9569dfde";
  }

  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x089df8c12f43ce82ULL;
  static const uint64_t static_value2 = 0xba50ba0d9569dfdeULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_object_detection_msgs/AcquireObjectImageAction";
  }

  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
AcquireObjectImageActionGoal action_goal\n\
AcquireObjectImageActionResult action_result\n\
AcquireObjectImageActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: cob_object_detection_msgs/AcquireObjectImageActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
AcquireObjectImageGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: cob_object_detection_msgs/AcquireObjectImageGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# The goal\n\
string object_name\n\
bool reset_image_counter\n\
geometry_msgs/PoseStamped pose\n\
geometry_msgs/PoseStamped[] sdh_joints\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: cob_object_detection_msgs/AcquireObjectImageActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
AcquireObjectImageResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: cob_object_detection_msgs/AcquireObjectImageResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# The results\n\
\n\
================================================================================\n\
MSG: cob_object_detection_msgs/AcquireObjectImageActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
AcquireObjectImageFeedback feedback\n\
\n\
================================================================================\n\
MSG: cob_object_detection_msgs/AcquireObjectImageFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# The feedback\n\
float32 percent_complete\n\
\n\
";
  }

  static const char* value(const ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AcquireObjectImageAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_object_detection_msgs::AcquireObjectImageAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::cob_object_detection_msgs::AcquireObjectImageActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::cob_object_detection_msgs::AcquireObjectImageActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::cob_object_detection_msgs::AcquireObjectImageActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_OBJECT_DETECTION_MSGS_MESSAGE_ACQUIREOBJECTIMAGEACTION_H
