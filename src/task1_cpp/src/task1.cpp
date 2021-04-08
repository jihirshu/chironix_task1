#include <ros/ros.h>
#include <ros/console.h>
#include <geometry_msgs/Twist.h>
#include <stdlib.h>

int main(int argc, char **argv) {
//Initializes ROS, and sets up a node
ros::init(argc, argv, "task1_cpp");
ros::NodeHandle nh;

//Ceates the publisher, and tells it to publish
//to the husky_velocity_controller/cmd_vel topic, with a queue size of 100
ros::Publisher pub=nh.advertise<geometry_msgs::Twist>("husky_velocity_controller/cmd_vel", 100);



ros::Rate rate(10);


//Declares the message to be sent
geometry_msgs::Twist msg;


ros::Duration(0.5).sleep();

ros::Time ClockWiseLoop = ros::Time::now();
ros::Duration floop(10.0);
while(ros::Time::now() < ClockWiseLoop + floop )
{

    msg.angular.z=-0.25;
//Publish the message
    pub.publish(msg);
   
    rate.sleep();
}



ros::Time antiClockWiseLoop = ros::Time::now();
ros::Duration sloop(10.0);
while(ros::Time::now() < antiClockWiseLoop + sloop )
{
   
    msg.angular.z=0.25;
//Publish the message
    pub.publish(msg);
    
    rate.sleep();
}
    
    
}