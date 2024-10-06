//
// Created by rhula on 9/25/2024.
//

#ifndef ROOM_H
#define ROOM_H
#include <vector>

#include "SmartComponent.h"

/**
 * @class Room
 * @brief Represents a Room which contains multiple smart devices.
 *
 * A Room class that inherits from SmartComponent. It stores a collection of
 * smart devices and can perform actions on them.
 */
class Room : public SmartComponent {
private:
    /** @brief Name of the room. */
    std::string roomName;

    /** @brief List of smart devices contained in the room. */
    std::vector<SmartComponent*> devices;

public:
    /**
     * @brief Default constructor for Room.
     */
    Room();

    /**
     * @brief Constructor that initializes a room with a specific name.
     *
     * @param roomName The name of the room.
     */
    Room(std::string& roomName);

    /**
     * @brief Adds a smart device to the room.
     *
     * @param device Pointer to the SmartComponent (smart device) to be added.
     */
    void add(SmartComponent* device);

    /**
     * @brief Removes a smart device from the room.
     *
     * @param device Pointer to the SmartComponent (smart device) to be removed.
     */
    void remove(SmartComponent* device);

    /**
     * @brief Performs an action on all devices in the room.
     *
     * @param action The action to be performed (e.g., "ToggleOn", "ToggleOff").
     */
    void performAction(const std::string& action) override;

    /**
     * @brief Retrieves the current status of the room.
     *
     * The status is typically an aggregated state of all the devices in the room.
     *
     * @return A string representing the status of the room.
     */
    std::string getStatus() override;

    /**
     * @brief Destructor for the Room class.
     */
    ~Room() override;
};



#endif //ROOM_H
