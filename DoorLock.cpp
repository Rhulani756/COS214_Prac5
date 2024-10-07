//
// Created by rhula on 9/25/2024.
//

#include "DoorLock.h"

DoorLock::DoorLock() {
    status = "unlocked";
}

std::string DoorLock::getStatus() {
    return status;
}

void DoorLock::performAction(const std::string& action) {
    if (action == "Lock") {
        status = "locked";
        std::cout << "Door is now LOCKED" << std::endl;
    } else if (action == "Unlock") {
        status = "unlocked";
        std::cout << "Door is now UNLOCKED" << std::endl;
    }
    else
        std::cout << action << " is not a valid action" << std::endl;
}

std::string DoorLock::getDeviceType() {
    return "DoorLock";
}
void DoorLock::update() {
    // Example logic for update: If the door is unlocked, it will automatically lock after update.
    if (status == "unlocked") {
        std::cout << "Warning: Door has been left unlocked. Auto-locking the door now." << std::endl;
        status = "locked";
    }
    std::cout << "Current Door Status: " << status << std::endl;
}

