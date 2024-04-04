#ifndef SIMPLE_TURTLE_KINEMATICS_HPP
#define SIMPLE_TURTLE_KINEMATICS_HPP


#include <rclcpp/rclcpp.hpp>
#include <tf2_ros/static_transform_broadcaster.h>
#include <tf2_ros/transform_broadcaster.h>
#include <geometry_msgs/msg/transform_stamped.hpp>

#include <memory>


class SimpleTfKinematics : public rclcpp::Node
{
public:
    SimpleTfKinematics(const std::string &name);


private:
    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> static_tf_broadcaster_;
    std::shared_ptr<tf2_ros::TransformBroadcaster> dynamic_tf_broadcaster;

    geometry_msgs::msg::TransformStamped static_transform_stamped_;
    geometry_msgs::msg::TransformStamped dynamic_transform_stamped_;

};


#endif