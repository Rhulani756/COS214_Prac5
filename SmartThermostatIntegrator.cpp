
#include "SmartThermostatIntegrator.h"

SmartThermostatIntegrator::SmartThermostatIntegrator(LegacyThermostat* thermostat)
        : legacyThermostat(thermostat) {}

void SmartThermostatIntegrator::setTemperature(int temp) {
    legacyThermostat->setLegacyTemperature(temp);
}

int SmartThermostatIntegrator::getTemperature() {
    return legacyThermostat->getLegacyTemperature();
}

void SmartThermostatIntegrator::performAction(const std::string& action) {
    if (action == "Increase") {
        setTemperature(getTemperature() + 1);
    } else if (action == "Decrease") {
        setTemperature(getTemperature() - 1);
    }
}


std::string SmartThermostatIntegrator::getStatus() {
    return "Temperature: " + std::to_string(getTemperature()) + "°C";
}

std::string SmartThermostatIntegrator::getDeviceType() {
    return "SmartThermostat";
}
