
#ifndef PRAC_5_SENSOR_H
#define PRAC_5_SENSOR_H

#include <vector>
#include "SmartDevice.h"

class Sensor {
protected:
    std::vector<SmartDevice*> devices;

public:
    // Constructor
    Sensor();

    // Add a SmartDevice to the sensor
    void addDevice(SmartDevice* device);

    // Remove a SmartDevice from the sensor
    void removeDevice(SmartDevice* device);

    // Notify all devices (perform an action or update)
    void notifyDevices();

    // Virtual method for getting the status (to be overridden by derived classes)
    virtual std::string getStatus();

    // Destructor
    virtual ~Sensor();
};

#endif //PRAC_5_SENSOR_H
