

#ifndef PRAC_5_LEGACYTHERMOSTAT_H
#define PRAC_5_LEGACYTHERMOSTAT_H

/**
 * @class LegacyThermostat
 * @brief Represents a legacy thermostat in the smart home system.
 *
 * The LegacyThermostat class encapsulates functionality to manage
 * the temperature settings of a legacy thermostat, allowing
 * retrieval and modification of the temperature.
 */
class LegacyThermostat {
private:
    int legacyTemperature;

public:
    /**
     * @brief Default constructor for the LegacyThermostat class.
     *
     * Initializes a new LegacyThermostat instance with a default
     * temperature setting.
     */
    LegacyThermostat();

     /**
     * @brief Sets the legacy temperature.
     *
     * This method allows the user to specify a temperature for
     * the legacy thermostat.
     *
     * @param temp The temperature to set in degrees Celsius.
     */
    void setLegacyTemperature(int temp);

     /**
     * @brief Retrieves the legacy temperature.
     *
     * This method returns the current temperature setting of the
     * legacy thermostat.
     *
     * @return The current temperature in degrees Celsius.
     */
    int getLegacyTemperature() const;
/**
     * @brief Destructor for the LegacyThermostat class.
     *
     * Cleans up resources used by the LegacyThermostat instance.
     */
    ~LegacyThermostat() {}
};


#endif //PRAC_5_LEGACYTHERMOSTAT_H
