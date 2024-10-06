

#ifndef PRAC_5_TURNOFFALLLIGHTSCOMMAND_H
#define PRAC_5_TURNOFFALLLIGHTSCOMMAND_H

#include "Command.h"
#include "Room.h"

class TurnOffAllLightsCommand : public Command {
private:
    Room* room;

public:
    // Constructor to initialize the command with a specific room
    TurnOffAllLightsCommand(Room* room) : room(room) {}

    // Override execute method to turn off all lights
    void execute() override {}

    ~TurnOffAllLightsCommand() {}
};



#endif //PRAC_5_TURNOFFALLLIGHTSCOMMAND_H
