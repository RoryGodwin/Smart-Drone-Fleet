# Smart-Drone-Fleet
learning exercise to develop a C++, OOP, multi-microservice, GIT, Docker and Ros 2


# Smart Drone Fleet Management System

## Objective
A modular C++ system for coordinating autonomous drones using a microservice architecture with OOP principles.

---

## Features

### Drone Capabilities
- Takeoff, land, waypoint navigation
- Real-time telemetry
- Obstacle avoidance
- Object detection from onboard camera

### Microservices
1. **Drone Controller**
   - Issues commands to drones
2. **Navigation**
   - Plans and updates safe routes
3. **Vision**
   - Detects objects or markers using OpenCV
4. **Telemetry**
   - Sends real-time metrics to ground station
5. **Ground Station**
   - CLI/GUI for status, control, and logging
6. **Task Planner**
   - Manages multi-drone coordination

---

## Technology Stack
- **Language**: C++17+
- **Build System**: CMake
- **Communication**: ROS2 or gRPC
- **CV Library**: OpenCV
- **Version Control**: Git + GitHub
- **Simulation**: AirSim or Gazebo
- **Containerization**: Docker (Optional)
