#ifndef PRAC_5_TURNOFFALLLIGHTSCOMMAND_H
#define PRAC_5_TURNOFFALLLIGHTSCOMMAND_H

#include "Command.h"
#include "Room.h"

/**
 * @class TurnOffAllLightsCommand
 * @brief Command class to turn off all lights in a specified room.
 *
 * This class implements the Command interface, providing a concrete command
 * for turning off all lights within a specified room. The command encapsulates
 * the action of turning off lights, allowing it to be executed within the context
 * of a macro routine or directly by a command invoker.
 */
class TurnOffAllLightsCommand : public Command {
private:
    Room* room; ///< Pointer to the Room where lights will be turned off.

public:
    /**
     * @brief Constructor to initialize the command with a specific room.
     *
     * @param room Pointer to the Room object where the command will act.
     */
    TurnOffAllLightsCommand(Room* room) : room(room) {}

    /**
     * @brief Execute the command to turn off all lights in the room.
     *
     * This method overrides the pure virtual execute method from the Command
     * interface. It calls the performAction method on the specified room
     * with the action "ToggleOff", effectively turning off all lights in that room.
     */
    void execute() override {
        room->performAction("ToggleOff");
    }

    /**
     * @brief Destructor for TurnOffAllLightsCommand.
     *
     * The destructor is defined but does not perform any specific actions.
     */
    ~TurnOffAllLightsCommand() {}
};

#endif // PRAC_5_TURNOFFALLLIGHTSCOMMAND_H
