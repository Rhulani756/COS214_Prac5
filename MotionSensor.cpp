
#include "MotionSensor.h"
#include <iostream>

MotionSensor::MotionSensor() : motionDetected(false) {}

void MotionSensor::detectMotion() {
    motionDetected = true;
    std::cout << "Motion detected! Notifying devices..." << std::endl;
    notifyDevices();
}

void MotionSensor::resetSensor() {
    motionDetected = false;
}
    bool MotionSensor::getmotion(){
return motionDetected;
    }
void MotionSensor::notifyDevices() {
    for (SmartDevice* device : devices) {
        device->performAction("TurnOn");
    }
}
