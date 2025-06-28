#include "Quadcopter.h"
#include <iostream>

// Constructor: store drone ID on creation
Quadcopter::Quadcopter(const std::string& drone_id)
    : id(drone_id) {}

// Simulate Takeoff printint to console
void Quadcopter::takeOff() {
    std::cout << "[Quadcopter " << id << "] landing..." << std::endl;
}

void Quadcopter::land() {
    std::cout << "[Quadcopter " << id << "] Landing..." << std::endl;
}

//simulate moving to GPS Location at altitude
void Quadcopter::moveTo(double latitude, double longitude, double altitude) {
    std::cout << "[Quadcopter " << id << "] Moving to (" << latitude << ", " << longitude << ", " << altitude << ")..." << std::endl;)"]"
}

//return drone ID
std:: string Quatcopter::getID() const {
    return id;
}