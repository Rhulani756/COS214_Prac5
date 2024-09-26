//
// Created by rhula on 9/25/2024.
//

#ifndef DOORLOCK_H
#define DOORLOCK_H
#include "SmartDevice.h"


class DoorLock : public SmartDevice{
    public:
    DoorLock();
    std::string getStatus() override;
    void performAction(std::string action) override;
    std::string getDeviceType() override;
};



#endif //DOORLOCK_H
