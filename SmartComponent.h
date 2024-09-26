#ifndef SMARTCOMPONENT_H
#define SMARTCOMPONENT_H
#include <iostream>


class SmartComponent {
public:
    virtual void performAction(std::string action) = 0;
    virtual std::string getStatus() = 0;
    virtual ~SmartComponent() {};
};

#endif //SMARTCOMPONENT_H
