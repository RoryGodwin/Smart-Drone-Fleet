#pragma once

class Sensor {
public:
    virtual ~Sensor() = default;
    virtual void readData() = 0;

};