//
// Created by rhula on 9/25/2024.
//

#include "Light.h"

Light::Light() {
    status = "off";
}

std::string Light::getStatus() {
    return status;
}

std::string Light::getDeviceType() {
    return "light";
}

void Light::performAction(const std::string& action) {
    if (action == "ToggleOn") {
        status = "on";
        std::cout << "Light is now ON" << std::endl;
    } else if (action == "ToggleOff") {
        status = "off";
        std::cout << "Light is now OFF" << std::endl;
    }
    else
        std::cout << "Unknown command" << std::endl;
}
void Light::update() {
    if (motionSensor && motionSensor->getmotion()) {
        status = "on";
        std::cout << "Light: Turning on due to detected motion." << std::endl;
    } else {
        status = "off";
        std::cout << "Light: Turning off due to no motion detected." << std::endl;
    }
}
