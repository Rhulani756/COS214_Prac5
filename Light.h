//
// Created by rhula on 9/25/2024.
//

#ifndef LIGHT_H
#define LIGHT_H
#include "SmartDevice.h"


class Light : public SmartDevice{
public:
    Light();
    std::string getStatus() override;
    std::string getDeviceType() override;
    void performAction(std::string action) override;
};



#endif //LIGHT_H
