
# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(SmartDroneFleet)

# Use C++17
set(CMAKE_CXX_STANDARD 17)

# Find OpenCV and include headers
find_package(OpenCV REQUIRED)

# Include header files
include_directories(
    include
    ${OpenCV_INCLUDE_DIRS}
)

# Define executable and source files
add_executable(main
    src/drone_controller/main.cpp
    src/drone_controller/Quadcopter.cpp
    src/vision/Camera.cpp
    src/telemetry/TelemetryData.cpp
)

# Link OpenCV libraries to our executables
target_link_libraries(main ${OpenCV_LIBS})
