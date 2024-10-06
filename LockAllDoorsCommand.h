#ifndef PRAC_5_LOCKALLDOORSCOMMAND_H
#define PRAC_5_LOCKALLDOORSCOMMAND_H

#include "Command.h"
#include "Room.h"

/**
 * @class LockAllDoorsCommand
 * @brief Command class to lock all doors in a specified room.
 *
 * This class implements the Command interface, providing a concrete command
 * for locking all doors within a specified room. The command encapsulates
 * the action of locking doors, allowing it to be executed within the context
 * of a macro routine or directly by a command invoker.
 */
class LockAllDoorsCommand : public Command {
private:
    Room* room; ///< Pointer to the Room where doors will be locked.

public:
    /**
     * @brief Constructor to initialize the command with a specific room.
     *
     * @param room Pointer to the Room object where the command will act.
     */
    LockAllDoorsCommand(Room* room) : room(room) {}

    /**
     * @brief Execute the command to lock all doors in the room.
     *
     * This method overrides the pure virtual execute method from the Command
     * interface. It calls the performAction method on the specified room
     * with the action "Lock", effectively locking all doors in that room.
     */
    void execute() override {
        room->performAction("Lock");
    }

    /**
     * @brief Destructor for LockAllDoorsCommand.
     *
     * The destructor is defined but does not perform any specific actions.
     */
    ~LockAllDoorsCommand() {}
};

#endif // PRAC_5_LOCKALLDOORSCOMMAND_H
