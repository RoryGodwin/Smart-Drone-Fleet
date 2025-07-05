#include "Quadcopter.h"      // drone implementation
#include "Camera.h"          // camera class for vision
#include <iostream>
#include "DroneController.h" //CLI controller microservices

#include <memory>

int main()
{

    // create shared drone and camera instances
    auto drone = std::make_shared<Quadcopter>("Drone-A1");
    auto camera = std::make_shared<Camera>();

    //initilize and start the CLI controller
    DroneController controller(drone, camera);
    // start input loop
    controller.run();

    return 0;
}


