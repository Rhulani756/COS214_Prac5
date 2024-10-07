
#ifndef PRAC_5_SENSOR_H
#define PRAC_5_SENSOR_H

#include <vector>
#include "SmartDevice.h"

// Abstract Subject class representing a sensor
/**
 * @class Sensor
 * @brief Abstract Subject class representing a sensor in the smart home system.
 *
 * The Sensor class serves as an abstract base class for sensors that monitor
 * environmental conditions and notify registered smart devices about changes.
 * It manages a list of `SmartDevice` instances that are interested in receiving
 * notifications when sensor data changes.
 */
class Sensor {
protected:
    std::vector<SmartDevice*> devices;

public:
    /**
     * @brief Virtual destructor for the Sensor class.
     *
     * Ensures proper cleanup of derived classes when an object is deleted
     * through a base class pointer.
     */

    virtual ~Sensor() = default;
     
     /**
     * @brief Adds a smart device to the list of devices to be notified.
     *
     * This method registers a `SmartDevice` instance so that it can receive
     * notifications when the sensor's data changes.
     *
     * @param device Pointer to the `SmartDevice` instance to be added.
     */

    void addDevice(SmartDevice* device);

      /**
     * @brief Removes a smart device from the list of devices to be notified.
     *
     * This method unregisters a `SmartDevice` instance so that it will no longer
     * receive notifications from the sensor.
     *
     * @param device Pointer to the `SmartDevice` instance to be removed.
     */

    void removeDevice(SmartDevice* device);

    /**
     * @brief Notifies all registered smart devices about sensor data changes.
     *
     * This pure virtual function must be implemented in derived classes to
     * specify how devices are notified when the sensor's data changes.
     */
    
    virtual void notifyDevices() = 0;
};
#endif //PRAC_5_SENSOR_H