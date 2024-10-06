//
// Created by rhula on 9/25/2024.
//

#include "Room.h"
Room::Room() {
    roomName = "Unknown room";
}

Room::Room(std::string roomName) {
    this->roomName = roomName;
}

void Room::add(SmartComponent *device) {
    this->devices.push_back(device);
}

void Room::remove(SmartComponent *device) {
    this->devices.pop_back();
}

void Room::performAction(std::string& action) {
    for (SmartComponent* device : devices) {
        device->performAction(action);
    }
}

std::string Room::getStatus() {
    std::cout << "Room: " << roomName << std::endl;
    for (SmartComponent* device : devices) {
        std::cout << ": " << device->getStatus() << std::endl;
    }
}

Room::~Room() {
    for (SmartComponent* device : devices) {
        delete device;
    }
}





