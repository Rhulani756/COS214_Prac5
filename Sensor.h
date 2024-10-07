
#ifndef PRAC_5_SENSOR_H
#define PRAC_5_SENSOR_H

#include <vector>
#include "SmartDevice.h"

// Abstract Subject class representing a sensor
class Sensor {
protected:
    std::vector<SmartDevice*> devices;

public:
    virtual ~Sensor() = default;
    void addDevice(SmartDevice* device);
    void removeDevice(SmartDevice* device);
    virtual void notifyDevices() = 0;
};
#endif //PRAC_5_SENSOR_H