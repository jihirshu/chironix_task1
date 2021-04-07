#!/usr/bin/env python2

import rospy

from geometry_msgs.msg import Twist

def husky_rotate():
	rospy.init_node('task1_python', anonymous=True)
	husky_cmd_vel_pub = rospy.Publisher('husky_velocity_controller/cmd_vel', Twist, queue_size=100)
	rate = rospy.Rate(10)
	rospy.sleep(0.5)
	msg = Twist()

	forCW = rospy.get_rostime()
	durationCW = rospy.duration(10.0)

	while(rospy.get_rostime < forCW + durationCW):
		msg.angular.z = -0.25
		husky_cmd_vel_pub.publish(msg)
		rate.sleep()


	forACW = rospy.get_rostime()
	durationACW = rospy.duration(10.0)

	while(rospy.get_rostime < forACW + durationACW):
		msg.angular.z = -0.25
		husky_cmd_vel_pub.publish(msg)
		rate.sleep()


if __name__ == '__main__':
	try:
		husky_rotate()
	except rospy.ROSInterruptException:
		pass
