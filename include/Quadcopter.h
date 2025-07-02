#pragma once
#include "Drone.h"

class Quadcopter : public Drone {
private:
    std::string id;

public:
    Quadcopter(const std::string& drone_id);

    void takeOff() override;
    void land() override;
    void moveTo(double lat, double lon, double alt) override;

    std::string getID() const override;
    

};
