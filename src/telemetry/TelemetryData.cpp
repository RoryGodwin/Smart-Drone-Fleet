#include "TelemetryData.h"
#include <sstream>

// convert telem data to human readable sting
std::string TelemetryData::toString() const {
    std::ostringstream oss;
    oss << "GPS: (" <<latitude << ", " << longitude << ")"
        << ", Altitude: " << altitude << "m"
        << ", Battery: " << batteryLevel << "%";
    return oss.str();

}
