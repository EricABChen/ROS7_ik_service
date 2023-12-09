#include <cstdlib>
#include <iostream>
#include "ros/ros.h"
#include "ik_service/PoseIK.h"
#include "ur_kinematics/ur_kin.h"


int main(int argc, char **argv)
{
  ros::init(argc, argv, "ik_client");
  // Declare variable
  ik_service::PoseIK ik_pose;
  // Declare Pose variable
  geometry_msgs::Pose part_pose;
  // Set varuabke
  part_pose.position.x = 0.5;
  ik_pose.request.part_pose = part_pose;

  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<ik_service::PoseIK>("pose_ik");
    
  if (client.call(ik_pose))
  {
    ROS_INFO("Call to ik_service returned [%i] solutions", ik_pose.response.num_sols);
    
  }
  else
  {
    ROS_ERROR("Failed to call service ik_server");
    return 1;
  }

  return 0;
}
