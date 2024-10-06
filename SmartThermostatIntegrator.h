

#ifndef PRAC_5_SMARTTHERMOSTATINTEGRATOR_H
#define PRAC_5_SMARTTHERMOSTATINTEGRATOR_H

#include <string>
#include "SmartDevice.h"
#include "LegacyThermostat.h"

class SmartThermostatIntegrator : public SmartDevice {
private:
    LegacyThermostat* legacyThermostat;

public:
    // Constructor to initialize with a LegacyThermostat object
    SmartThermostatIntegrator(LegacyThermostat* legacyThermostat);

    // Perform the specified action
    void performAction(std::string action) override;

    // Set temperature through the integrator
    void setTemperature(int temperature);

    // Get the current temperature
    int getTemperature() const;

    // Override getStatus from SmartDevice
    std::string getStatus() override;

    // Get the type of device
    std::string getDeviceType() override;

    // Destructor
    ~SmartThermostatIntegrator();
};


#endif //PRAC_5_SMARTTHERMOSTATINTEGRATOR_H
