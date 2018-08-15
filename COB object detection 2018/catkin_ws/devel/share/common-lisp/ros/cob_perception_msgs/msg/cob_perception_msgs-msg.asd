
(cl:in-package :asdf)

(defsystem "cob_perception_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :sensor_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Rect" :depends-on ("_package_Rect"))
    (:file "_package_Rect" :depends-on ("_package"))
    (:file "ActionRecognitionmsg" :depends-on ("_package_ActionRecognitionmsg"))
    (:file "_package_ActionRecognitionmsg" :depends-on ("_package"))
    (:file "People" :depends-on ("_package_People"))
    (:file "_package_People" :depends-on ("_package"))
    (:file "Float64ArrayStamped" :depends-on ("_package_Float64ArrayStamped"))
    (:file "_package_Float64ArrayStamped" :depends-on ("_package"))
    (:file "PositionMeasurement" :depends-on ("_package_PositionMeasurement"))
    (:file "_package_PositionMeasurement" :depends-on ("_package"))
    (:file "Person" :depends-on ("_package_Person"))
    (:file "_package_Person" :depends-on ("_package"))
    (:file "DetectionArray" :depends-on ("_package_DetectionArray"))
    (:file "_package_DetectionArray" :depends-on ("_package"))
    (:file "PositionMeasurementArray" :depends-on ("_package_PositionMeasurementArray"))
    (:file "_package_PositionMeasurementArray" :depends-on ("_package"))
    (:file "Skeleton" :depends-on ("_package_Skeleton"))
    (:file "_package_Skeleton" :depends-on ("_package"))
    (:file "PointCloud2Array" :depends-on ("_package_PointCloud2Array"))
    (:file "_package_PointCloud2Array" :depends-on ("_package"))
    (:file "ColorDepthImageArray" :depends-on ("_package_ColorDepthImageArray"))
    (:file "_package_ColorDepthImageArray" :depends-on ("_package"))
    (:file "PersonStamped" :depends-on ("_package_PersonStamped"))
    (:file "_package_PersonStamped" :depends-on ("_package"))
    (:file "Mask" :depends-on ("_package_Mask"))
    (:file "_package_Mask" :depends-on ("_package"))
    (:file "ColorDepthImage" :depends-on ("_package_ColorDepthImage"))
    (:file "_package_ColorDepthImage" :depends-on ("_package"))
    (:file "Detection" :depends-on ("_package_Detection"))
    (:file "_package_Detection" :depends-on ("_package"))
  ))