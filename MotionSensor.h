
#ifndef PRAC_5_MOTIONSENSOR_H
#define PRAC_5_MOTIONSENSOR_H


#include "Sensor.h"

class MotionSensor : public Sensor {
private:
    bool motionDetected;

public:
    // Constructor
    MotionSensor();

    // Method to simulate motion detection
    void detectMotion();

    // Method to reset the motion detection status
    void resetSensor();

    // Override getStatus method from Sensor
    std::string getStatus() override;

    // Destructor
    ~MotionSensor() {}
};


#endif //PRAC_5_MOTIONSENSOR_H
