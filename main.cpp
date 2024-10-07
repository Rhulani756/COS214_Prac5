
#include "MotionSensor.h"
#include "Light.h"
#include "LegacyThermostat.h"
#include "SmartThermostatIntegrator.h"
#include <iostream>

int main() {
std::cout<<"this is henru's part\n";
    // Create legacy thermostat and adapter
    LegacyThermostat legacyThermostat;
    SmartThermostatIntegrator smartThermostat(&legacyThermostat);

    // Perform actions using the adapter
    smartThermostat.setTemperature(22);
    std::cout << smartThermostat.getStatus() << std::endl;  // Output: Temperature: 22°C

    // Create a light and sensor
    Light livingRoomLight;
    MotionSensor motionSensor;

    // Register the light with the motion sensor
    motionSensor.addDevice(&livingRoomLight);

    // Detect motion and trigger notifications
    motionSensor.detectMotion();  // Output: Motion detected! Notifying devices...
    std::cout << livingRoomLight.getStatus() << std::endl;  // Output: Light is on

    return 0;
}
