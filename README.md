# Chironix Task 1


### Ros Details
Assuming that your system has ros melodic installed on your system. <strong>If not installed</strong>, please go to this [link](http://wiki.ros.org/melodic/Installation/Ubuntu), follow the instructions and install melodic full desktop version using the following command :

	sudo apt install ros-melodic-desktop-full

The implementation also requires the installation of "timed_roslaunch". If it is not installed on your system, please use the following command to install the same : 

	sudo apt install ros-melodic-timed-roslaunch

### Husky Installation
Assuming that your system has the husky simulation package, husky navigation package and husky visualization package installed. <strong>If not installed</strong>, please use the following commands : 

	sudo apt-get update
	sudo apt-get install ros-melodic-husky-simulator
	export HUSKY_GAZEBO_DESCRIPTION=$(rospack find husky_gazebo)/urdf/description.gazebo.xacro

Please make sure that everything is in order by running this command in a terminal : 

	roslaunch husky_gazebo husky_empty_world.launch

If the above command repeatedly fails, make sure that the instructions on this [tutorial](http://wiki.ros.org/Robots/Husky) has been followed.		


# Task 1 Installation:
If all previously mentioned requirements have been fulfilled, we can proceed with the package installation for task 1. Clone the repo into a desired location. In this example we will use the local Desktop and install the module.

    cd ~/Desktop
    git clone https://github.com/jihirshu/chironix_task1.git
    cd chironix_task1
    catkin_make

## Usage

To launch task 1 cpp node, open a terminal and execute the following commands : 

    source ~/Desktop/chironix_task1/devel/setup.bash
    roslaunch task1_cpp task1_cpp.launch
    
To launch task 1 python node, open a terminal and execute the following commands : 

    source ~/Desktop/chironix_task1/devel/setup.bash
    roslaunch task1_python task1_python.launch
    
Please wait when the launch files are executing as some time delay has been added between internal node launches.
