//
// Created by rhula on 9/25/2024.
//

#ifndef LIGHT_H
#define LIGHT_H
#include "SmartDevice.h"
#include "MotionSensor.h"

/**
 * @class Light
 * @brief Represents a smart light device in the smart home system.
 *
 * The Light class extends the SmartDevice class and implements methods
 * specific to a light device, such as turning the light on/off and checking its status.
 */
class Light : public SmartDevice {
    private:
    MotionSensor* motionSensor; // Pointer to a MotionSensor instance

public:
    /**
     * @brief Default constructor for the Light class.
     *
     * Initializes a new smart light device with default settings.
     */
    Light();

    /**
     * @brief Retrieves the current status of the smart light.
     *
     * This method returns the current state of the light, such as whether it's on or off.
     *
     * @return A string representing the status of the light.
     */
    std::string getStatus() override;

    /**
     * @brief Retrieves the device type.
     *
     * This method returns the type of the device, which in this case is "Light".
     *
     * @return A string representing the device type.
     */
    std::string getDeviceType() override;

    /**
     * @brief Performs a specified action on the smart light.
     *
     * This method takes an action string (e.g., "ToggleOn", "ToggleOff") and
     * changes the state of the light based on the action.
     *
     * @param action The action or command to be performed on the smart light.
     */
    void performAction(const std::string& action) override;
    /**
     * @brief Updates the state of the light.
     *
     * This method refreshes the internal state of the light, which could include
     * checking the status of the motion sensor and adjusting the light's state
     * (on/off) accordingly, or implementing any scheduled tasks for the light.
     */
    void update() override;
};

#endif //LIGHT_H
