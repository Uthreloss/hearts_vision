#!/usr/bin/env python

__author__ = "Steve Battle"
__email__ = "steve.battle@uwe.ac.uk"

# adapts output from cob-detector generating a percept

import rospy
from std_msgs.msg import String
from sensor_msgs.msg import Image
from cob_perception_msgs.msg import DetectionArray
from vision.msg import Percept
from geometry_msgs.msg import Point
import argparse

NODE = 'cob_adapter'

ap = argparse.ArgumentParser()
ap.add_argument('--thresh', type=float, default=0, help="threshold")
ap.add_argument('--objects', help="targeted objects")

# this is required to ignore additional args added by roslaunch
args = ap.parse_known_args()[0]

# most recent reported direction of gaze
gaze = None
pub = None
latest_image = None
objects = set()

def detection_callback(msg):
    global args
    global latest_image
    global pub
    global gaze
    global objects

    d = msg.detections
    if len(d)==0:
        return

    # find best score, filtering out unwanted objects
    best = -1
    score = -1
    for i in range(len(d)):
        if (d[i].score>score) \
        and not(len(objects)>0 and not(d[i].label in objects)):
            best = i
            score = d[i].score
    
    if best<0:
        return

    g = gaze
    rospy.loginfo("cob: "+d[best].label+" "+str(score))

    # minimum threshold
    if score>=args.thresh:
        # publish the findings on the vision/perception topic
        p = Percept()
        p.image = latest_image
        p.source = "/xtion/rgb/image_raw"
        p.object_id = d[best].label
        p.score = d[best].score
        p.detector = d[best].detector
        tl = Point()
        br = Point()
        tl.x, tl.y = d[best].mask.roi.x, d[best].mask.roi.y
        br.x, br.y = tl.x + d[best].mask.roi.width, tl.y + d[best].mask.roi.height
        p.topLeft = tl
        p.bottomRight = br
        if not g is None:
            p.gaze = g
        pub.publish(p)

def image_callback(msg):
    global latest_image
    latest_image = msg

# keep track of the latest head position
def gaze_callback(msg):
    global gaze
    gaze = msg

def main():
    global pub
    global objects

    rospy.init_node(NODE)

    if args.objects is not None:
        f = open(args.objects, "r")
        line = f.readline().rstrip()
        while line:
            objects.add(line)
            rospy.loginfo(line)
            line = f.readline().rstrip()
        f.close()

    # subscribe to cob detections
    cobTopic = '/object_detection/detections'
    rospy.Subscriber(cobTopic, DetectionArray, detection_callback)

    # create an image subscriber
    imageTopic = "/xtion/rgb/image_raw"
    rospy.Subscriber(imageTopic, Image, image_callback)

    # subscribe to head movements (gaze)
    gazeTopic = "vision/control/gaze"
    rospy.Subscriber(gazeTopic, Point, gaze_callback)

    # create a percept publisher
    perceptTopic = "/vision/perception"
    pub = rospy.Publisher(perceptTopic, Percept, queue_size=1)
    rospy.spin()

main()