//
// Created by rhula on 9/25/2024.
//

#ifndef ROOM_H
#define ROOM_H
#include <vector>

#include "SmartComponent.h"

class Room : public SmartComponent{
private:
    std::string roomName;
    std::vector<SmartComponent*> devices;
    public:
    Room();
    Room(std::string roomName);
    void add(SmartComponent* device);
    void remove(SmartComponent* device);
    void performAction(std::string action) override;
    std::string getStatus() override;
    ~Room() override;

};



#endif //ROOM_H
