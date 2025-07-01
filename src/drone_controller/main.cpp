#include "Quadcopter.h"
#include "Camera.h"
#include <iostream>

int main() {
    // Create a Quadcopter instance with ID "A1"
    Quadcopter drone("Drone-A1");

    // Create a camera sensor instance
    Camera cam;

    // Simulate takeoff
    drone.takeOff();
    // Simulate flight 
    drone.moveTo(37.7749, -122.4194, 100.0);
    // capture image
    cam.readData();
    // Simulate landing
    drone.land();

    return 0;
}