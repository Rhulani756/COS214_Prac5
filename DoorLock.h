//
// Created by rhula on 9/25/2024.
//

#ifndef DOORLOCK_H
#define DOORLOCK_H
#include "SmartDevice.h"

/**
 * @class DoorLock
 * @brief Represents a smart door lock device in the smart home system.
 *
 * The DoorLock class extends the SmartDevice class and includes functionality
 * specific to a door lock, such as locking and unlocking the door, as well
 * as reporting its current state.
 */
class DoorLock : public SmartDevice {
public:
    /**
     * @brief Default constructor for the DoorLock class.
     *
     * Initializes a new smart door lock device, setting its initial state to
     * unlocked.
     */
    DoorLock();

    /**
     * @brief Retrieves the current status of the door lock.
     *
     * This method returns the door lock's current state, which could be
     * either "locked" or "unlocked".
     *
     * @return A string representing the current status of the door lock.
     */
    std::string getStatus() override;

    /**
     * @brief Performs a specified action on the smart door lock.
     *
     * This method interprets the action command (e.g., "Lock", "Unlock")
     * and adjusts the door lock's state accordingly.
     *
     * @param action The action or command to be performed on the door lock.
     */
    void performAction(const std::string& action) override;

    /**
     * @brief Retrieves the device type.
     *
     * This method returns the type of the device, which in this case is
     * "DoorLock".
     *
     * @return A string representing the device type.
     */
    std::string getDeviceType() override;
    /**
     * @brief Updates the state of the door lock.
     *
     * This method refreshes the internal state of the door lock, which could
     * include checking the lock's current status, monitoring for unauthorized
     * access attempts, or implementing any necessary adjustments based on
     * external conditions or commands.
     */
    void update() override;
};

#endif //DOORLOCK_H
