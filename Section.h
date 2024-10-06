//
// Created by henru on 2024/10/06.
//

#ifndef PRAC_5_SECTION_H
#define PRAC_5_SECTION_H

#include <string>
#include <vector>
#include "SmartComponent.h"

class Section : public SmartComponent {
private:
    std::string sectionName;
    std::vector<SmartComponent*> rooms;

public:
    // Default Constructor
    Section();

    // Constructor with section name
    Section(const std::string& name);

    // Add a SmartComponent (e.g., Room) to the section
    void add(SmartComponent* room);

    // Remove a SmartComponent from the section
    void remove(SmartComponent* room);

    // Perform a specified action on all rooms in the section
    void performAction(const std::string& action) override;

    // Get the status of the section
    std::string getStatus() override;

    // Destructor
    ~Section();


#endif //PRAC_5_SECTION_H
