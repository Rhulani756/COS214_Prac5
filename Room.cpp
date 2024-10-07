//
// Created by rhula on 9/25/2024.
//

#include "Room.h"
#include <algorithm>
Room::Room() {
    roomName = "Unknown room";
}

Room::Room(std::string &roomName) {
    this->roomName = roomName;
}

void Room::add(SmartComponent *device) {
    this->devices.push_back(device);
}

void Room::remove(SmartComponent *device) {
    devices.erase(std::remove(devices.begin(), devices.end(), device), devices.end());
}

void Room::performAction(const std::string& action) {
    for (SmartComponent* device : devices) {
        device->performAction(action);
    }
}

std::string Room::getStatus() {
    std::string status = "Room: " + roomName + "\n";
    for (SmartComponent* device : devices) {
        status += device->getStatus() + "\n";
    }
    return status;
}

Room::~Room() {
    for (SmartComponent* device : devices) {
        delete device;
    }
}





