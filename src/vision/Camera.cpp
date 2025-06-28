#include "Camera.h"
#include <opencv2/opencv.hpp>
#include <iostream>

// implement readData() from Sensor base class
// Captures a single image from webcam and display

void Camera::readData() {
    //open default camera (usually index 0)
    cv::VideoCapture cap(0);

    //check if the camera was successfully opened
    if (!cap.isOpened()) {
        std::cerr << "Camera failed to open!" << std::endl;
        return;

    }

    //frame container
    cv::Mat frame;
    cap >> frame; // Capture frame

    // If frame empty, something went wrong
    if (frame.empty()) {
        std::cerr << "Captured empty frame!" << std::endl;
        return;
    }

    //Display frame
    cv::imshow("Drone camera view", frame);
    cv::waitKey(3000); // three second delay

    // clean
    cap.release();
    cv::destroyAllWindows();
}