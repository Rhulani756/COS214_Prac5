
#include "LegacyThermostat.h"

LegacyThermostat::LegacyThermostat() : legacyTemperature(20) {} // Default to 20 degrees

void LegacyThermostat::setLegacyTemperature(int temp) {
    legacyTemperature = temp;
}

int LegacyThermostat::getLegacyTemperature() const {
    return legacyTemperature;
}
