#pragma once
#include <string>

struct TelemetryData {
    double latitude;
    double longitude;
    double altitude;
    double batteryLevel;

    std::string toString() const;
};