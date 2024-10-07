
#include "MotionSensor.h"
#include "Light.h"
#include "LegacyThermostat.h"
#include "SmartThermostatIntegrator.h"
#include "Thermostat.h"
#include "DoorLock.h"
#include "Room.h"
#include "MacroRoutine.h"
#include "LockAllDoorsCommand.h"
#include "TurnOffAllLightsCommand.h"
#include "SetTemperatureCommand.h"

#include <iostream>

#include "Section.h"

void testComponent1() {
    // Create some smart devices
    auto* light1 = new Light();
    auto* thermostat = new Thermostat();
    auto* doorLock = new DoorLock();
    light1->getDeviceType();
    thermostat->getDeviceType();
    doorLock->getDeviceType();


    // Create a room and add devices to it
    std::string roomName = "Living Room";
    std::string roomName2 = "Kitchen";
    Room livingRoom(roomName);

    livingRoom.add(light1);
    livingRoom.add(thermostat);
    livingRoom.add(doorLock);

    // Perform actions on the devices
    std::cout << "Performing actions in the Living Room:" << std::endl;
    livingRoom.performAction("ToggleOn");  // Turn on all devices
    livingRoom.performAction("ToggleOff");
    livingRoom.performAction("Lock");
    livingRoom.performAction("Unlock");
    livingRoom.performAction("SetTemp 22");  // Set temperature on thermostat

    // Get and print the status of all devices in the room
    std::cout << "Current status of devices in the Living Room:" << std::endl;
    std::cout << livingRoom.getStatus() << std::endl;

}

void testComponent2() {
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
}

void testComponent3() {
    // Create a room object
    std::string room_name = "Living Room";
    Room someRoom(room_name);

    Light* light2 = new Light();
    Thermostat* thermostat2 = new Thermostat();
    DoorLock* doorLock2 = new DoorLock();

    someRoom.add(light2);
    someRoom.add(thermostat2);
    someRoom.add(doorLock2);

    // Create command objects for the room dynamically
    auto* lockCommand = new LockAllDoorsCommand(&someRoom);
    auto* lightsOffCommand = new TurnOffAllLightsCommand(&someRoom);
    auto* setTempCommand = new SetTemperatureCommand(&someRoom, 22);

    // Test individual commands
    lockCommand->execute();            // Should lock all doors in the living room
    lightsOffCommand->execute();       // Should turn off all lights in the living room
    setTempCommand->execute();         // Should set the temperature to 22 in the living room

    // Create a macro routine and add commands to it
    MacroRoutine morningRoutine;
    morningRoutine.addProcedure(lockCommand);
    morningRoutine.addProcedure(lightsOffCommand);
    morningRoutine.addProcedure(setTempCommand);

    // Execute all commands in the macro routine
    std::cout << "\nExecuting morning routine...\n" << std::endl;
    morningRoutine.execute();

    // Clean up allocated memory
}
void testComponent4(){
    MotionSensor hallwaySensor;

    // Create a Light instance linked to the MotionSensor
    Light hallwayLight;

    // Link the Light to the MotionSensor for notifications
    hallwaySensor.addDevice(&hallwayLight);

    // Test Case 1: Simulate motion detection
    std::cout << "Test Case 1: Motion detected." << std::endl;
    hallwaySensor.detectMotion();  // Simulates motion
    hallwaySensor.notifyDevices(); // Notifies all connected devices
    hallwayLight.update();         // Should turn on the light
    std::cout << "Current Light Status: " << hallwayLight.getStatus() << "\n" << std::endl;

    // Test Case 2: Simulate no motion (reset)
    std::cout << "Test Case 2: No motion detected." << std::endl;
    hallwaySensor.resetSensor();   // Resets motion sensor
    hallwaySensor.notifyDevices(); // Notifies all connected devices
    hallwayLight.update();         // Should turn off the light
    std::cout << "Current Light Status: " << hallwayLight.getStatus() << "\n" << std::endl;

}
void testSection() {
    // Use std::string variables instead of string literals
    std::string livingRoomName = "Living Room";
    std::string kitchenName = "Kitchen";

    // Create Room instances using the string variables
    Room* livingRoom = new Room(livingRoomName);
    Room* kitchen = new Room(kitchenName);

    // Rest of the code remains unchanged...
    livingRoom->add(new Light());
    livingRoom->add(new Thermostat());
    livingRoom->add(new DoorLock());

    kitchen->add(new Light());
    kitchen->add(new Thermostat());

    Section homeSection("Home Section");
    homeSection.add(livingRoom);
    homeSection.add(kitchen);

    std::cout << "Initial Section Status:" << std::endl;
    std::cout << homeSection.getStatus() << std::endl;

    homeSection.performAction("ToggleOn");
    std::cout << "Updated Section Status:" << std::endl;
    std::cout << homeSection.getStatus() << std::endl;

    homeSection.performAction("Lock");
    std::cout << "Updated Section Status after locking doors:" << std::endl;
    std::cout << homeSection.getStatus() << std::endl;

    std::cout << "Removing the 'Kitchen' room from the section..." << std::endl;
    homeSection.remove(kitchen);
    std::cout << "Section Status after removing Kitchen:" << std::endl;
    std::cout << homeSection.getStatus() << std::endl;
}

int main() {

    testComponent1();
    testComponent2();
    testComponent3();
    testComponent4();
    testSection();
    return 0;
}
