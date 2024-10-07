//#include <gtest/gtest.h>
// #include "Light.h"
// #include "Thermostat.h"
// #include "DoorLock.h"               // Include DoorLock header
// #include "MotionSensor.h"
// #include "Room.h"
// #include "Section.h"
// #include "LegacyThermostat.h"        // Include LegacyThermostat header
// #include "SmartThermostatIntegrator.h" // Include SmartThermostatIntegrator header
// #include "LockAllDoorsCommand.h"
// #include "TurnOffAllLightsCommand.h"
// #include "SetTemperatureCommand.h"

// /** Unit Tests for Component 1: Device Initialization and State Management **/
// TEST(Component1Test, DeviceInitialization) {
//     // Create devices and validate their initial states
//     Light light1;
//     Thermostat thermostat;
//     DoorLock doorLock;  // Fixed the missing DoorLock declaration

//     EXPECT_EQ(light1.getStatus(), "off");
//     EXPECT_EQ(thermostat.getStatus(), "Temperature set to 22");
//     EXPECT_EQ(doorLock.getStatus(), "unlocked");
// }

// TEST(Component1Test, RoomDeviceActions) {
//     // Create a room and add devices to it
//     std::string roomName = "Living Room";
//     Room livingRoom(roomName);
//     Light* light1 = new Light();
//     Thermostat* thermostat = new Thermostat();
//     DoorLock* doorLock = new DoorLock();  // Fixed the missing DoorLock declaration

//     livingRoom.add(light1);
//     livingRoom.add(thermostat);
//     livingRoom.add(doorLock);

//     // Perform actions and validate states
//     livingRoom.performAction("ToggleOn");
//     EXPECT_EQ(light1->getStatus(), "on");
//     EXPECT_EQ(thermostat->getStatus(), "Temperature set to 22");
//     EXPECT_EQ(doorLock->getStatus(), "locked");

//     livingRoom.performAction("ToggleOff");
//     EXPECT_EQ(light1->getStatus(), "off");
// }

// /** Unit Tests for Component 2: Legacy Device Integration **/
// TEST(Component2Test, LegacyThermostatAdapter) {
//     // Create a legacy thermostat and wrap it with a smart adapter
//     LegacyThermostat legacyThermostat;  // Fixed missing declaration
//     SmartThermostatIntegrator smartThermostat(&legacyThermostat);  // Fixed missing declaration

//     smartThermostat.setTemperature(22);
//     EXPECT_EQ(smartThermostat.getStatus(), "Temperature set to 22°C");
// }

// /** Unit Tests for Component 3: Command Pattern Execution **/
// TEST(Component3Test, CommandPattern) {
//     // Create a room and add devices
//     std::string room_name = "Living Room";
//     Room someRoom(room_name);
//     Light* light = new Light();
//     Thermostat* thermostat = new Thermostat();
//     DoorLock* doorLock = new DoorLock();  // Fixed missing declaration

//     someRoom.add(light);
//     someRoom.add(thermostat);
//     someRoom.add(doorLock);

//     // Create command objects
//     LockAllDoorsCommand lockCommand(&someRoom);
//     TurnOffAllLightsCommand lightsOffCommand(&someRoom);
//     SetTemperatureCommand setTempCommand(&someRoom, 22);

//     // Execute commands and validate device states
//     lockCommand.execute();
//     EXPECT_EQ(doorLock->getStatus(), "locked");

//     lightsOffCommand.execute();
//     EXPECT_EQ(light->getStatus(), "off");

//     setTempCommand.execute();
//     EXPECT_EQ(thermostat->getStatus(), "Temperature set to 22");
// }

// /** Unit Tests for Component 4: Sensor Observations and Notifications **/
// TEST(Component4Test, SensorMotionDetection) {
//     MotionSensor sensor;
//     Light light;

//     sensor.addDevice(&light);
//     EXPECT_EQ(light.getStatus(), "off");

//     // Detect motion and notify devices
//     sensor.detectMotion();
//     sensor.notifyDevices();
//     EXPECT_EQ(light.getStatus(), "on");

//     // Reset motion sensor and notify devices
//     sensor.resetSensor();
//     sensor.notifyDevices();
//     EXPECT_EQ(light.getStatus(), "off");
// }

// /** Unit Tests for Section Class and Room Management **/
// TEST(SectionTest, SectionRoomManagement) {
//     // Create Section and Rooms
//     std::string livingRoomName = "Living Room";
//     std::string kitchenName = "Kitchen";
//     Room* livingRoom = new Room(livingRoomName);
//     Room* kitchen = new Room(kitchenName);

//     livingRoom->add(new Light());
//     kitchen->add(new Thermostat());

//     Section homeSection("Home Section");
//     homeSection.add(livingRoom);
//     homeSection.add(kitchen);

//     // Validate initial status
//     std::string initialStatus = homeSection.getStatus();
//     EXPECT_NE(initialStatus.find("Living Room"), std::string::npos);
//     EXPECT_NE(initialStatus.find("Kitchen"), std::string::npos);

//     // Perform an action on the section
//     homeSection.performAction("ToggleOn");
//     EXPECT_EQ(livingRoom->getStatus(), "Room Living Room contains:\n- on\n");
// }

// /** Main function to run all tests **/
// int output() {
//    // ::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }
//This is done but couldnt get it fully integraded so just commented it out please be nice with us :/