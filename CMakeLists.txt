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
        Room.h)
