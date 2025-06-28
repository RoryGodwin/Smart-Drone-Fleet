#pragma once
#include "Sensor.h"
#include <opencv2/opencv.hpp>

class Camera : public Sensor {

    public:
    void readData() override; //Capture and Display Frame
    
};