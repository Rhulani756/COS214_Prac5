//
// Created by rhula on 9/25/2024.
//
#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H
#include "SmartComponent.h"


/**
 * @class SmartDevice
 * @brief An abstract base class for all smart devices in the smart home system.
 *
 * The SmartDevice class extends the SmartComponent class and defines additional
 * functionality specific to smart devices. It includes methods for performing actions,
 * retrieving the device's status, and getting the type of the device.
 */
class SmartDevice : public SmartComponent {
public:
    /**
     * @brief The current status of the device.
     *
     * This string stores the current state (e.g., "on", "off") of the smart device.
     */
    std::string status;

    /**
     * @brief Performs a specified action on the smart device.
     *
     * This method will override the base class method to perform the action specified
     * for the smart device. The action can be commands like turning the device on/off.
     *
     * @param action The action or command to be performed on the smart device.
     */
    void performAction(const std::string& action) override;

    /**
     * @brief Retrieves the current status of the smart device.
     *
     * This method returns the current state (status) of the device.
     *
     * @return A string representing the status of the device.
     */
    virtual std::string getStatus() = 0;

    /**
     * @brief Retrieves the device type.
     *
     * This pure virtual function must be implemented by derived classes to return the type
     * of the smart device (e.g., Thermostat, Light, DoorLock).
     *
     * @return A string representing the type of the device.
     */
    virtual std::string getDeviceType() = 0;
    virtual ~SmartDevice() ;

};



#endif //SMARTDEVICE_H
