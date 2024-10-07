//
// Created by henru on 2024/10/06.
//

#include "Section.h"
#include <iostream>
#include <algorithm>

Section::Section() : sectionName("Unnamed Section") {}

Section::Section(const std::string& name) : sectionName(name) {}

void Section::add(Room* room) {
    rooms.push_back(room);
}

void Section::remove(Room* room) {
    rooms.erase(std::remove(rooms.begin(), rooms.end(), room), rooms.end());

}

void Section::performAction(const std::string& action) {
    for (SmartComponent* room : rooms) {
        room->performAction(action);
    }
}

std::string Section::getStatus() {
    std::string status = "Section " + sectionName + " contains:\n";
    for (SmartComponent* room : rooms) {
        status += room->getStatus() + "\n";
    }
    return status;
}

Section::~Section() {
    for (Room* room : rooms) {
        delete room;
    }
}
