#ifndef PRAC_5_SETTEMPERATURECOMMAND_H
#define PRAC_5_SETTEMPERATURECOMMAND_H

#include "Command.h"
#include "Room.h"

/**
 * @class SetTemperatureCommand
 * @brief Command class to set the temperature in a specified room.
 *
 * This class implements the Command interface, providing a concrete command
 * for setting the temperature in a specified room. The command encapsulates
 * the action of adjusting the temperature, allowing it to be executed within
 * the context of a macro routine or directly by a command invoker.
 */
class SetTemperatureCommand : public Command {
private:
    Room* room; ///< Pointer to the Room where the temperature will be set.
    int temperature; ///< Desired temperature to set in the room.

public:
    /**
     * @brief Constructor to initialize the command with a specific room and temperature.
     *
     * @param room Pointer to the Room object where the temperature will be set.
     * @param temp Desired temperature to set in the room.
     */
    SetTemperatureCommand(Room* room, int temp) : room(room), temperature(temp) {}

    /**
     * @brief Execute the command to set the temperature in the room.
     *
     * This method overrides the pure virtual execute method from the Command
     * interface. It calls the performAction method on the specified room
     * with the action "ToggleOn". Note: The action should be updated to
     * actually set the temperature in the future.
     */
    void execute() override {
        room->performAction("ToggleOn");
        // Ideally, you would set the temperature here as well
        // This needs to be adjusted based on how you want to implement temperature setting
    }

    /**
     * @brief Destructor for SetTemperatureCommand.
     *
     * The destructor is defined but does not perform any specific actions.
     */
    ~SetTemperatureCommand() {}
};

#endif // PRAC_5_SETTEMPERATURECOMMAND_H
