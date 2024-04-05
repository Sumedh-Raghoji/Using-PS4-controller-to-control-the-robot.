I have started this project with the intent to further my knowledge in the robotics. This project uses ROS2 as platform for the communication between Gazebo and PS4 controller. C++ and Python have been used to complete the task of manually control the robot. Although, I have used both the programming languages, each langauge module is sufficient by itself to run the code.

## Requirements:
ROS2 version : ROS2 humble  
Python Version: Python 3.10.12

## To launch the Simulator:  

$ . install/setup.bash  
$ ros2 launch bumperbot_description gazebo.launch.py    

## To launch the controller: 

$ . install/setup.bash  
$ ros2 launch bumperbot_controller controller.launch.py 

##  To start teleoperating with Joystick: 

$ . install/setup.bash  
$ ros2 launch bumperbot_controller joystick_teleop.launch.py    