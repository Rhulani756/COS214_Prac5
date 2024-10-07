

#include "SmartDevice.h"
// Provide a definition for the virtual destructor
SmartDevice::~SmartDevice() {
    // No specific cleanup is needed here, but the definition is necessary.
}

// Define the performAction method if it was not defined inline in the header
void SmartDevice::performAction(const std::string& action) {
    // Implement the default behavior of performAction if needed
    status = action;
}