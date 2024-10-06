//
// Created by rhula on 9/25/2024.
//

#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "SmartDevice.h"

class Thermostat : public SmartDevice{
private:
    int temperature;
public:
    Thermostat();
    void performAction(std::string action) override;
    std::string getStatus() override;
    std::string getDeviceType() override;
};



#endif //THERMOSTAT_H
