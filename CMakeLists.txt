
cmake_minimum_required(VERSION 3.27)
project(Prac_5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Prac_5
        Command.cpp
        Command.h
        DoorLock.cpp
        DoorLock.h
        LegacyThermostat.cpp
        LegacyThermostat.h
        Light.cpp
        Light.h
        LockAllDoorsCommand.cpp
        LockAllDoorsCommand.h
        MacroRoutine.cpp
        MacroRoutine.h
        main.cpp
        MotionSensor.cpp
        MotionSensor.h
        Room.cpp
        Room.h
        Section.cpp
        Section.h
        SetTemperatureCommand.cpp
        SetTemperatureCommand.h
        SmartComponent.cpp
        SmartComponent.h
        SmartDevice.cpp
        SmartDevice.h
        Thermostat.cpp
        Thermostat.h
        TurnOffAllLightsCommand.cpp
        TurnOffAllLightsCommand.h
        SmartThermostatIntegrator.h
        SmartThermostatIntegrator.cpp
        Sensor.h
        Sensor.cpp)
