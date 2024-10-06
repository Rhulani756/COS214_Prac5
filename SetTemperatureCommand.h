

#ifndef PRAC_5_SETTEMPERATURECOMMAND_H
#define PRAC_5_SETTEMPERATURECOMMAND_H

#include "Command.h"
#include "Room.h"

class SetTemperatureCommand : public Command {
private:
    Room* room;
    int temperature;

public:
    // Constructor to initialize the command with a specific room and temperature
    SetTemperatureCommand(Room* room, int temp) : room(room), temperature(temp) {}

    // Override execute method to set the temperature
    void execute() override {
        room->performAction("ToggleOn");
    }

    ~SetTemperatureCommand() {}
};

#endif //PRAC_5_SETTEMPERATURECOMMAND_H
