
#ifndef PRAC_5_SMARTTHERMOSTATINTEGRATOR_H
#define PRAC_5_SMARTTHERMOSTATINTEGRATOR_H


#include "SmartDevice.h"
#include "LegacyThermostat.h"

class SmartThermostatIntegrator : public SmartDevice {
private:
    LegacyThermostat* legacyThermostat;

public:
    SmartThermostatIntegrator(LegacyThermostat* thermostat);
    void setTemperature(int temp);
    int getTemperature();
    void performAction(const std::string& action) override;
    std::string getStatus() override;
    std::string getDeviceType() override;
  
};

#endif
