#ifndef SMARTCOMPONENT_H
#define SMARTCOMPONENT_H
#include <iostream>

/**
 * @class SmartComponent
 * @brief An abstract base class for all smart components in the smart home system.
 *
 * The SmartComponent class defines the interface for smart devices or components
 * that can perform actions and report their status. All smart devices like
 * thermostats, lights, and door locks will inherit from this class.
 */
class SmartComponent {
public:
    /**
     * @brief Performs a specified action on the smart component.
     *
     * This pure virtual function must be implemented by derived classes.
     * The action is typically a command like "ToggleOn" or "SetTemp".
     *
     * @param action The action or command to be performed.
     */
    virtual void performAction(const std::string& action) = 0;

    /**
     * @brief Retrieves the current status of the smart component.
     *
     * This pure virtual function must be implemented by derived classes.
     * It returns a string representing the current state of the component.
     *
     * @return A string representing the status of the component.
     */
    virtual std::string getStatus() = 0;

    /**
     * @brief Virtual destructor.
     *
     * Ensures proper cleanup of derived classes when a SmartComponent object is destroyed.
     */
    virtual ~SmartComponent() = default;
};

#endif //SMARTCOMPONENT_H
