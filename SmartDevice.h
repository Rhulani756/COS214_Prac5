//
// Created by rhula on 9/25/2024.
//
#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H
#include "SmartComponent.h"


class SmartDevice : public SmartComponent {
public:
    std::string status;
    void performAction(std::string& action) override;
    std::string getStatus() override;
    virtual std::string getDeviceType() = 0;
};



#endif //SMARTDEVICE_H
