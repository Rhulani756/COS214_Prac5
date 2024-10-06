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

void Light::performAction(std::string& action) {
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


