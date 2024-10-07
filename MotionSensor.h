
#ifndef PRAC_5_MOTIONSENSOR_H
#define PRAC_5_MOTIONSENSOR_H


#include "Sensor.h"

/**
 * @class MotionSensor
 * @brief Represents a motion sensor in the smart home system.
 *
 * The MotionSensor class extends the Sensor class and implements
 * functionality to detect motion and notify registered smart devices
 * about the detected motion events.
 */
class MotionSensor : public Sensor {
private:
    bool motionDetected;

public:
    /**
     * @brief Default constructor for the MotionSensor class.
     *
     * Initializes a new MotionSensor instance and sets the initial
     * motion detection state to false.
     */

    MotionSensor();
     /**
     * @brief Detects motion.
     *
     * This method simulates the detection of motion, setting the 
     * `motionDetected` state to true and notifying registered devices.
     */
    void detectMotion();
    /**
     * @brief Resets the motion sensor.
     *
     * This method resets the sensor state, setting `motionDetected`
     * to false, indicating that no motion is currently detected.
     */
    void resetSensor();
    /**
     * @brief Retrieves the motion detection status.
     *
     * This method returns the current state of motion detection.
     *
     * @return True if motion is detected; otherwise, false.
     */
    bool getmotion();
     /**
     * @brief Notifies all registered smart devices about motion detection.
     *
     * This method overrides the pure virtual function in the Sensor
     * class to implement the notification logic for registered devices
     * when motion is detected.
     */
    void notifyDevices() override;
};

#endif //PRAC_5_MOTIONSENSOR_H