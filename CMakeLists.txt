cmake_minimum_required(VERSION 3.29)
project(Practical5)

set(CMAKE_CXX_STANDARD 20)

add_executable(Practical5 main.cpp
        SmartComponent.cpp
        SmartComponent.h
        SmartDevice.cpp
        SmartDevice.h
        Thermostat.cpp
        Thermostat.h
        Light.cpp
        Light.h
        DoorLock.cpp
        DoorLock.h
        Room.cpp
        Room.h
        TurnOffAllLightsCommand.h
        TurnOffAllLightsCommand.cpp
        SmartThermostatIntegrator.h
        SmartThermostatIntegrator.cpp
        SetTemperatureCommand.h
        SetTemperatureCommand.cpp
        Sensor.h
        Sensor.cpp
        Section.h
        Section.cpp
        MotionSensor.h
        MotionSensor.cpp
        MacroRoutine.h
        MacroRoutine.cpp
        LockAllDoorsCommand.h
        LockAllDoorsCommand.cpp
        LegacyThermostat.cpp
        Command.cpp)
