# ecse473_f23_axc1293_ik_service

## Package description
This repo is a ROS package that contains ik_server tool to suplement ARIAC_2019 competition

## Dependency:
In order to run/view this model, the listed dependencies MUST be satisfied:
-  ROS(Noetic)
-  Ubuntu 20.04

## Roslaunch with launch file
To launch the model in STDR, you need to first
- Download this package into your catkin workspace
- Build the package with `catkin_make`
- Source: `source catkin_ws/devel/setup.bash`

### Launch Roscore

`roscore &`

After roscore init, press ctrl+c to run roscore in background

### Start service

 `rosrun ik_service ik_service_node`

### Start client

 `rosrun ik_service ik_client_node`


