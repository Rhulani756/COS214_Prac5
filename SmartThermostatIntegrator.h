
#ifndef PRAC_5_SMARTTHERMOSTATINTEGRATOR_H
#define PRAC_5_SMARTTHERMOSTATINTEGRATOR_H


#include "SmartDevice.h"
#include "LegacyThermostat.h"
/**
 * @class SmartThermostatIntegrator
 * @brief Integrates a LegacyThermostat into the smart home system.
 *
 * The SmartThermostatIntegrator class acts as an adapter to allow the 
 * usage of a LegacyThermostat within the smart home framework, 
 * providing methods to set and get temperature, and to interact 
 * with the legacy device.
 */
class SmartThermostatIntegrator : public SmartDevice {
private:
    LegacyThermostat* legacyThermostat;

public:

    /**
     * @brief Constructor for the SmartThermostatIntegrator class.
     *
     * Initializes a new SmartThermostatIntegrator with the specified 
     * LegacyThermostat.
     *
     * @param thermostat Pointer to the LegacyThermostat to be integrated.
     */

    SmartThermostatIntegrator(LegacyThermostat* thermostat);

     /**
     * @brief Sets the temperature on the legacy thermostat.
     *
     * This method allows setting the desired temperature on the 
     * integrated LegacyThermostat.
     *
     * @param temp The temperature to set in degrees Celsius.
     */

    void setTemperature(int temp);

      /**
     * @brief Retrieves the current temperature from the legacy thermostat.
     *
     * This method fetches the current temperature set on the 
     * integrated LegacyThermostat.
     *
     * @return The current temperature in degrees Celsius.
     */

    int getTemperature();

    /**
     * @brief Performs a specified action on the smart thermostat integrator.
     *
     * This method interprets the action command (e.g., "SetTemp", "ToggleOn")
     * and adjusts the settings of the legacy thermostat accordingly.
     *
     * @param action The action or command to be performed on the thermostat.
     */

    void performAction(const std::string& action) override;

     /**
     * @brief Retrieves the current status of the smart thermostat integrator.
     *
     * This method returns the current state of the integrated thermostat, 
     * including its temperature setting.
     *
     * @return A string representing the current status of the thermostat.
     */

    std::string getStatus() override;

    /**
     * @brief Retrieves the device type.
     *
     * This method returns the type of the device, which in this case is 
     * "SmartThermostatIntegrator".
     *
     * @return A string representing the device type.
     */

    std::string getDeviceType() override;
  
};

#endif
