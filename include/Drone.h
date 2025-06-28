#pragma once
#include <string>

class Drone {
public:
    virtual ~Drone() = default;

    virtual void takeOff() = 0;
    virtual void land() = 0;
    virtual void moveTo(double latitude, double longitude, double altitude) = 0;

    virtual std::string getID() const = 0;

};