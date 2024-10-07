//
// Created by henru on 2024/10/06.
//

#ifndef PRAC_5_SECTION_H
#define PRAC_5_SECTION_H

#include <string>
#include <vector>
#include "SmartComponent.h"
#include "Room.h"

/**
 * @brief Represents a section of the smart home, which can consist of multiple rooms.
 *
 * The Section class is a composite of SmartComponents and is used to manage a group of rooms
 * in a smart home system. It allows for actions to be performed on all rooms within the section
 * and maintains the status of the entire section.
 */
class Section : public SmartComponent {
private:
    std::string sectionName; /**< Name of the section (e.g., "Living Area", "Bedroom"). */
    std::vector<Room*> rooms; /**< List of rooms (SmartComponents) in the section. */

public:
    /**
     * @brief Default constructor for Section.
     *
     * Initializes a Section object with no name and an empty list of rooms.
     */
    Section();

    /**
     * @brief Constructor with section name.
     *
     * @param name The name of the section to be created.
     */
    Section(const std::string& name);

    /**
     * @brief Adds a room (SmartComponent) to the section.
     *
     * @param room Pointer to a SmartComponent representing the room to be added.
     */
    void add(Room* room);

    /**
     * @brief Removes a room (SmartComponent) from the section.
     *
     * @param room Pointer to a SmartComponent representing the room to be removed.
     */
    void remove(Room* room);

    /**
     * @brief Perform a specified action on all rooms in the section.
     *
     * @param action The action to be performed on each room in the section (e.g., "turn off lights").
     */
    void performAction(const std::string& action) override;

    /**
     * @brief Get the status of the section.
     *
     * @return A string representing the current status of the section, which may aggregate
     * the status of all rooms in the section.
     */
    std::string getStatus() override;

    /**
     * @brief Destructor for Section.
     *
     * Cleans up resources allocated for the Section, including its list of rooms.
     */
    ~Section();
};

#endif //PRAC_5_SECTION_H
