#include "Sensor.h"
#include <algorithm>

void Sensor::addDevice(SmartDevice* device) {
    devices.push_back(device);
}

void Sensor::removeDevice(SmartDevice* device) {
    devices.erase(std::remove(devices.begin(), devices.end(), device), devices.end());
}