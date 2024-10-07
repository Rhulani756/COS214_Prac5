//
// Created by rhula on 9/25/2024.
//

#include "Thermostat.h"
Thermostat::Thermostat() {
    temperature = 22;
    status = "off";
}

void Thermostat::performAction(const std::string& action) {
    if (action.find("SetTemp") != std::string::npos) {
        // Extract the temperature from the action command (e.g., SetTemp24)
        temperature = stoi(action.substr(7));
        std::cout << "Thermostat set to " << temperature << " degrees" << std::endl;
    }
    else if (action == "ToggleOn") {
        status = "on";
        std::cout << "Thermostat is now ON" << std::endl;
    } else if (action == "ToggleOff") {
        status = "off";
        std::cout << "Thermostat is now OFF" << std::endl;
    }
    else
        std::cout << "Unknown command" << std::endl;
}

std::string Thermostat::getStatus() {
    return status;
}

std::string Thermostat::getDeviceType() {
    return "Thermostat";
}
void Thermostat::update() {
    if (temperature < 22) { // If temperature is too low
        if (status != "on") {
            status = "on";
            std::cout << "Thermostat: Temperature is too low (" << temperature << "°C). Turning ON to heat." << std::endl;
        }
    } else if (temperature > 32) { // If temperature is too high
        if (status != "on") {
            status = "on";
            std::cout << "Thermostat: Temperature is too high (" << temperature << "°C). Turning ON to cool." << std::endl;
        }
    } else { // Temperature is within the comfortable range
        if (status != "off") {
            status = "off";
            std::cout << "Thermostat: Temperature is comfortable (" << temperature << "°C). Turning OFF." << std::endl;
        }
    }
}