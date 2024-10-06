
#ifndef PRAC_5_LEGACYTHERMOSTAT_H
#define PRAC_5_LEGACYTHERMOSTAT_H


class LegacyThermostat {
private:
    int legacyTemperature;

public:
    // Default constructor
    LegacyThermostat();

    // Sets the legacy temperature
    void setLegacyTemperature(int temp);

    // Gets the legacy temperature
    int getLegacyTemperature() const;

    // Destructor
    ~LegacyThermostat() {}
};


#endif //PRAC_5_LEGACYTHERMOSTAT_H
