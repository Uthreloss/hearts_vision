# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cob_object_detection_msgs/DetectObjectsRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import sensor_msgs.msg
import std_msgs.msg

class DetectObjectsRequest(genpy.Message):
  _md5sum = "8d651fac3fa327d154d291de842e3994"
  _type = "cob_object_detection_msgs/DetectObjectsRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """std_msgs/String object_name
sensor_msgs/RegionOfInterest roi

================================================================================
MSG: std_msgs/String
string data

================================================================================
MSG: sensor_msgs/RegionOfInterest
# This message is used to specify a region of interest within an image.
#
# When used to specify the ROI setting of the camera when the image was
# taken, the height and width fields should either match the height and
# width fields for the associated image; or height = width = 0
# indicates that the full resolution image was captured.

uint32 x_offset  # Leftmost pixel of the ROI
                 # (0 if the ROI includes the left edge of the image)
uint32 y_offset  # Topmost pixel of the ROI
                 # (0 if the ROI includes the top edge of the image)
uint32 height    # Height of ROI
uint32 width     # Width of ROI

# True if a distinct rectified ROI should be calculated from the "raw"
# ROI in this message. Typically this should be False if the full image
# is captured (ROI not used), and True if a subwindow is captured (ROI
# used).
bool do_rectify
"""
  __slots__ = ['object_name','roi']
  _slot_types = ['std_msgs/String','sensor_msgs/RegionOfInterest']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       object_name,roi

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DetectObjectsRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.object_name is None:
        self.object_name = std_msgs.msg.String()
      if self.roi is None:
        self.roi = sensor_msgs.msg.RegionOfInterest()
    else:
      self.object_name = std_msgs.msg.String()
      self.roi = sensor_msgs.msg.RegionOfInterest()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.object_name.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4IB.pack(_x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.object_name is None:
        self.object_name = std_msgs.msg.String()
      if self.roi is None:
        self.roi = sensor_msgs.msg.RegionOfInterest()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.object_name.data = str[start:end].decode('utf-8')
      else:
        self.object_name.data = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify,) = _struct_4IB.unpack(str[start:end])
      self.roi.do_rectify = bool(self.roi.do_rectify)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.object_name.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4IB.pack(_x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.object_name is None:
        self.object_name = std_msgs.msg.String()
      if self.roi is None:
        self.roi = sensor_msgs.msg.RegionOfInterest()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.object_name.data = str[start:end].decode('utf-8')
      else:
        self.object_name.data = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.roi.x_offset, _x.roi.y_offset, _x.roi.height, _x.roi.width, _x.roi.do_rectify,) = _struct_4IB.unpack(str[start:end])
      self.roi.do_rectify = bool(self.roi.do_rectify)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4IB = struct.Struct("<4IB")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cob_object_detection_msgs/DetectObjectsResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import cob_object_detection_msgs.msg
import sensor_msgs.msg
import std_msgs.msg

class DetectObjectsResponse(genpy.Message):
  _md5sum = "6da5c76956a10a2b2a7e649614ba9504"
  _type = "cob_object_detection_msgs/DetectObjectsResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """cob_object_detection_msgs/DetectionArray object_list


================================================================================
MSG: cob_object_detection_msgs/DetectionArray
Header header
Detection[] detections

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: cob_object_detection_msgs/Detection
Header header
string label
int32 id
string detector
float32 score
Mask mask
geometry_msgs/PoseStamped pose
geometry_msgs/Point bounding_box_lwh

================================================================================
MSG: cob_object_detection_msgs/Mask
# this message is used to mark where an object is present in an image
# this can be done either by a roi region on the image (less precise) or a mask (more precise)

Rect roi

# in the case when mask is used, 'roi' specifies the image region and 'mask'
# (which should be of the same size) a binary mask in that region
sensor_msgs/Image mask

# in the case there is 3D data available, 'indices' are used to index the 
# part of the point cloud representing the object
#pcl/PointIndices indices

================================================================================
MSG: cob_object_detection_msgs/Rect
int32 x
int32 y
int32 width
int32 height

================================================================================
MSG: sensor_msgs/Image
# This message contains an uncompressed image
# (0, 0) is at top-left corner of image
#

Header header        # Header timestamp should be acquisition time of image
                     # Header frame_id should be optical frame of camera
                     # origin of frame should be optical center of cameara
                     # +x should point to the right in the image
                     # +y should point down in the image
                     # +z should point into to plane of the image
                     # If the frame_id here and the frame_id of the CameraInfo
                     # message associated with the image conflict
                     # the behavior is undefined

uint32 height         # image height, that is, number of rows
uint32 width          # image width, that is, number of columns

# The legal values for encoding are in file src/image_encodings.cpp
# If you want to standardize a new string format, join
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.

string encoding       # Encoding of pixels -- channel meaning, ordering, size
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h

uint8 is_bigendian    # is this data bigendian?
uint32 step           # Full row length in bytes
uint8[] data          # actual matrix data, size is (step * rows)

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['object_list']
  _slot_types = ['cob_object_detection_msgs/DetectionArray']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       object_list

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DetectObjectsResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.object_list is None:
        self.object_list = cob_object_detection_msgs.msg.DetectionArray()
    else:
      self.object_list = cob_object_detection_msgs.msg.DetectionArray()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.object_list.header.seq, _x.object_list.header.stamp.secs, _x.object_list.header.stamp.nsecs))
      _x = self.object_list.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.object_list.detections)
      buff.write(_struct_I.pack(length))
      for val1 in self.object_list.detections:
        _v1 = val1.header
        buff.write(_struct_I.pack(_v1.seq))
        _v2 = _v1.stamp
        _x = _v2
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.label
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_i.pack(val1.id))
        _x = val1.detector
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_f.pack(val1.score))
        _v3 = val1.mask
        _v4 = _v3.roi
        _x = _v4
        buff.write(_struct_4i.pack(_x.x, _x.y, _x.width, _x.height))
        _v5 = _v3.mask
        _v6 = _v5.header
        buff.write(_struct_I.pack(_v6.seq))
        _v7 = _v6.stamp
        _x = _v7
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v6.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = _v5
        buff.write(_struct_2I.pack(_x.height, _x.width))
        _x = _v5.encoding
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = _v5
        buff.write(_struct_BI.pack(_x.is_bigendian, _x.step))
        _x = _v5.data
        length = len(_x)
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _v8 = val1.pose
        _v9 = _v8.header
        buff.write(_struct_I.pack(_v9.seq))
        _v10 = _v9.stamp
        _x = _v10
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v9.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _v11 = _v8.pose
        _v12 = _v11.position
        _x = _v12
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v13 = _v11.orientation
        _x = _v13
        buff.write(_struct_4d.pack(_x.x, _x.y, _x.z, _x.w))
        _v14 = val1.bounding_box_lwh
        _x = _v14
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.object_list is None:
        self.object_list = cob_object_detection_msgs.msg.DetectionArray()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.object_list.header.seq, _x.object_list.header.stamp.secs, _x.object_list.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.object_list.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.object_list.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.object_list.detections = []
      for i in range(0, length):
        val1 = cob_object_detection_msgs.msg.Detection()
        _v15 = val1.header
        start = end
        end += 4
        (_v15.seq,) = _struct_I.unpack(str[start:end])
        _v16 = _v15.stamp
        _x = _v16
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v15.frame_id = str[start:end].decode('utf-8')
        else:
          _v15.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.label = str[start:end].decode('utf-8')
        else:
          val1.label = str[start:end]
        start = end
        end += 4
        (val1.id,) = _struct_i.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.detector = str[start:end].decode('utf-8')
        else:
          val1.detector = str[start:end]
        start = end
        end += 4
        (val1.score,) = _struct_f.unpack(str[start:end])
        _v17 = val1.mask
        _v18 = _v17.roi
        _x = _v18
        start = end
        end += 16
        (_x.x, _x.y, _x.width, _x.height,) = _struct_4i.unpack(str[start:end])
        _v19 = _v17.mask
        _v20 = _v19.header
        start = end
        end += 4
        (_v20.seq,) = _struct_I.unpack(str[start:end])
        _v21 = _v20.stamp
        _x = _v21
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v20.frame_id = str[start:end].decode('utf-8')
        else:
          _v20.frame_id = str[start:end]
        _x = _v19
        start = end
        end += 8
        (_x.height, _x.width,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v19.encoding = str[start:end].decode('utf-8')
        else:
          _v19.encoding = str[start:end]
        _x = _v19
        start = end
        end += 5
        (_x.is_bigendian, _x.step,) = _struct_BI.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        _v19.data = str[start:end]
        _v22 = val1.pose
        _v23 = _v22.header
        start = end
        end += 4
        (_v23.seq,) = _struct_I.unpack(str[start:end])
        _v24 = _v23.stamp
        _x = _v24
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v23.frame_id = str[start:end].decode('utf-8')
        else:
          _v23.frame_id = str[start:end]
        _v25 = _v22.pose
        _v26 = _v25.position
        _x = _v26
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v27 = _v25.orientation
        _x = _v27
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _struct_4d.unpack(str[start:end])
        _v28 = val1.bounding_box_lwh
        _x = _v28
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        self.object_list.detections.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.object_list.header.seq, _x.object_list.header.stamp.secs, _x.object_list.header.stamp.nsecs))
      _x = self.object_list.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.object_list.detections)
      buff.write(_struct_I.pack(length))
      for val1 in self.object_list.detections:
        _v29 = val1.header
        buff.write(_struct_I.pack(_v29.seq))
        _v30 = _v29.stamp
        _x = _v30
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v29.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.label
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_i.pack(val1.id))
        _x = val1.detector
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_struct_f.pack(val1.score))
        _v31 = val1.mask
        _v32 = _v31.roi
        _x = _v32
        buff.write(_struct_4i.pack(_x.x, _x.y, _x.width, _x.height))
        _v33 = _v31.mask
        _v34 = _v33.header
        buff.write(_struct_I.pack(_v34.seq))
        _v35 = _v34.stamp
        _x = _v35
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v34.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = _v33
        buff.write(_struct_2I.pack(_x.height, _x.width))
        _x = _v33.encoding
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = _v33
        buff.write(_struct_BI.pack(_x.is_bigendian, _x.step))
        _x = _v33.data
        length = len(_x)
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _v36 = val1.pose
        _v37 = _v36.header
        buff.write(_struct_I.pack(_v37.seq))
        _v38 = _v37.stamp
        _x = _v38
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v37.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _v39 = _v36.pose
        _v40 = _v39.position
        _x = _v40
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v41 = _v39.orientation
        _x = _v41
        buff.write(_struct_4d.pack(_x.x, _x.y, _x.z, _x.w))
        _v42 = val1.bounding_box_lwh
        _x = _v42
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.object_list is None:
        self.object_list = cob_object_detection_msgs.msg.DetectionArray()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.object_list.header.seq, _x.object_list.header.stamp.secs, _x.object_list.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.object_list.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.object_list.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.object_list.detections = []
      for i in range(0, length):
        val1 = cob_object_detection_msgs.msg.Detection()
        _v43 = val1.header
        start = end
        end += 4
        (_v43.seq,) = _struct_I.unpack(str[start:end])
        _v44 = _v43.stamp
        _x = _v44
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v43.frame_id = str[start:end].decode('utf-8')
        else:
          _v43.frame_id = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.label = str[start:end].decode('utf-8')
        else:
          val1.label = str[start:end]
        start = end
        end += 4
        (val1.id,) = _struct_i.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.detector = str[start:end].decode('utf-8')
        else:
          val1.detector = str[start:end]
        start = end
        end += 4
        (val1.score,) = _struct_f.unpack(str[start:end])
        _v45 = val1.mask
        _v46 = _v45.roi
        _x = _v46
        start = end
        end += 16
        (_x.x, _x.y, _x.width, _x.height,) = _struct_4i.unpack(str[start:end])
        _v47 = _v45.mask
        _v48 = _v47.header
        start = end
        end += 4
        (_v48.seq,) = _struct_I.unpack(str[start:end])
        _v49 = _v48.stamp
        _x = _v49
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v48.frame_id = str[start:end].decode('utf-8')
        else:
          _v48.frame_id = str[start:end]
        _x = _v47
        start = end
        end += 8
        (_x.height, _x.width,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v47.encoding = str[start:end].decode('utf-8')
        else:
          _v47.encoding = str[start:end]
        _x = _v47
        start = end
        end += 5
        (_x.is_bigendian, _x.step,) = _struct_BI.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        _v47.data = str[start:end]
        _v50 = val1.pose
        _v51 = _v50.header
        start = end
        end += 4
        (_v51.seq,) = _struct_I.unpack(str[start:end])
        _v52 = _v51.stamp
        _x = _v52
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v51.frame_id = str[start:end].decode('utf-8')
        else:
          _v51.frame_id = str[start:end]
        _v53 = _v50.pose
        _v54 = _v53.position
        _x = _v54
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v55 = _v53.orientation
        _x = _v55
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _struct_4d.unpack(str[start:end])
        _v56 = val1.bounding_box_lwh
        _x = _v56
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        self.object_list.detections.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_f = struct.Struct("<f")
_struct_BI = struct.Struct("<BI")
_struct_i = struct.Struct("<i")
_struct_3I = struct.Struct("<3I")
_struct_4i = struct.Struct("<4i")
_struct_4d = struct.Struct("<4d")
_struct_2I = struct.Struct("<2I")
_struct_3d = struct.Struct("<3d")
class DetectObjects(object):
  _type          = 'cob_object_detection_msgs/DetectObjects'
  _md5sum = 'f609b54d4b922c8b97b8a0fc3dd91fdb'
  _request_class  = DetectObjectsRequest
  _response_class = DetectObjectsResponse
