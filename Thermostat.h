//
// Created by rhula on 9/25/2024.
//

#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include "SmartDevice.h"

/**
 * @class Thermostat
 * @brief Represents a smart thermostat device in the smart home system.
 *
 * The Thermostat class extends the SmartDevice class and includes functionality
 * specific to a thermostat, such as setting and getting temperature and managing
 * its state (on/off).
 */
class Thermostat : public SmartDevice {
private:
    /**
     * @brief Stores the current temperature set on the thermostat.
     */
    int temperature;

public:
    /**
     * @brief Default constructor for the Thermostat class.
     *
     * Initializes a new smart thermostat device with a default temperature setting.
     */
    Thermostat();

    /**
     * @brief Performs a specified action on the smart thermostat.
     *
     * This method interprets the action command (e.g., "SetTemp", "ToggleOn", "ToggleOff")
     * and adjusts the thermostat's settings accordingly.
     *
     * @param action The action or command to be performed on the thermostat.
     */
    void performAction(const std::string& action) override;

    /**
     * @brief Retrieves the current status of the thermostat.
     *
     * This method returns the thermostat's current state, which could include
     * whether it is on or off and its temperature setting.
     *
     * @return A string representing the current status of the thermostat.
     */
    std::string getStatus() override;

    /**
     * @brief Retrieves the device type.
     *
     * This method returns the type of the device, which in this case is "Thermostat".
     *
     * @return A string representing the device type.
     */
    std::string getDeviceType() override;
};

#endif //THERMOSTAT_H

