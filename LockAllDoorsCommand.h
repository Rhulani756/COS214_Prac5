
#ifndef PRAC_5_LOCKALLDOORSCOMMAND_H
#define PRAC_5_LOCKALLDOORSCOMMAND_H
#include "Command.h"
#include "Room.h"

class LockAllDoorsCommand : public Command {
private:
    Room* room;

public:
    // Constructor to initialize the command with a specific room
    LockAllDoorsCommand(Room* room) : room(room) {}

    // Override execute method to lock all doors
    void execute() override {}

    ~LockAllDoorsCommand() {}
};


#endif //PRAC_5_LOCKALLDOORSCOMMAND_H
