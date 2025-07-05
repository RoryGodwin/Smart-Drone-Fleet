#pragma once

#include "Drone.h" // Base drone interface content
#include "Camera.h" // Camera sensor class

#include <memory>
#include <string>

// DroneController class handles command parsing and action
class DroneController
{
private:
	// Smart pointers for drone and camera
	std::shared_ptr<Drone> drone;
	std::shared_ptr<Camera> camera;

public:
	// Constructer
	DroneController(std::shared_ptr<Drone> d, std::shared_ptr<Camera> c);

	// Accept and handle user commands
	void run();

private:
	// Parses and executes a single command
	void handleCommand(const std::string& cmd);
};
