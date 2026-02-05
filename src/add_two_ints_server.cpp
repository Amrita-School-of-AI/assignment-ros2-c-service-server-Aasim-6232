#include <memory>
#include <functional>

#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

/*
 * TODO: Create a Class named 'AddTwoIntsServer' that inherits from rclcpp::Node.
 * Requirements:
 * 1. The constructor should name the node "add_two_ints_server".
 * 2. Create a service named "add_two_ints" using example_interfaces::srv::AddTwoInts.
 * 3. The service callback should:
 *    - Add request->a and request->b
 *    - Store result in response->sum
 *    - Log: "Incoming request: a=X, b=Y" and "Sending response: sum=Z"
 */

class AddTwoIntsServer : public rclcpp::Node
{
public:
    AddTwoIntsServer()
        : Node("add_two_ints_server")
    {
        // TODO: Create the service here
    }

private:
    // TODO: Define the service callback function here

    rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr service_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AddTwoIntsServer>());
    rclcpp::shutdown();
    return 0;
}
