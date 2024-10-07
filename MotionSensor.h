
#ifndef PRAC_5_MOTIONSENSOR_H
#define PRAC_5_MOTIONSENSOR_H


#include "Sensor.h"

class MotionSensor : public Sensor {
private:
    bool motionDetected;

public:
    MotionSensor();
    void detectMotion();
    void resetSensor();
    bool getmotion();
    void notifyDevices() override;
};

#endif //PRAC_5_MOTIONSENSOR_H