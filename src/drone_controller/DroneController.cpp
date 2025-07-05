#include "DroneController.h"

#include <iostream>
#include <sstream> // for passing commands

// Constructor:initialize with shared drone and camera instances
DroneController::DroneController(std::shared_ptr<Drone> d, std::shared_ptr<Camera> c)
	: drone(d), camera(c) {}

//main loop: reads user input and deledates to handleCommand()
void DroneController::run()
{
	std::string input;

	// Display available commands to user
	std::cout << "\n Drone Controller active. Available commands: \n";
	std::cout << " - takeoff\n - land\n move <lat> <lon> <alt>\n - Camera\n - Exit\n";

	while (true) {
	// prompt input
	std::cout << "\n";
	std::getline(std::cin, input);

	// Handle user command
	handleCommand(input);

	}
}

// Parse a command string & perform action
void DroneController::handleCommand(const std::string& cmd)
{
	//stream for breaking command into parts
	std::istringstream iss(cmd);
	std::string token;
	// extract command keyword
	iss >> token;

	//compare imput toke for command
	if (token == "takeoff")
	{
		// call drone takeoff method
		drone->takeOff();
	}
	else if (token == "land")
	{
		// call drone land method
		drone->land();
	}
	else if (token == "move")
	{
		double lat, lon, alt;
		// parse the location arguments
		iss >> lat >> lon >> alt;
		// call moveTo method with arguments
		drone->moveTo(lat,lon,alt);
	}
        else if (token == "camera")
	{
		// trigger camera capture
		camera->readData();
	}
	else if (token == "exit")
	{
		std::cout << "Exiting Controller" << std::endl;
		// end program
		exit(0);
        }
	else
	{
		// unknown response
		std::cout << "Unknown Command, Please Try Again.\n takeoff, move, camera, land, exit." << std::endl;

	}
}
