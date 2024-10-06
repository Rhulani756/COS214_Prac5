#ifndef PRAC_5_MACROROUTINE_H
#define PRAC_5_MACROROUTINE_H

#include <vector>
#include "Command.h"

/**
 * @class MacroRoutine
 * @brief Class that encapsulates a series of commands to be executed in sequence.
 *
 * The MacroRoutine class manages a collection of Command objects. It allows
 * users to add and remove commands, and execute them in the order they were
 * added. This is useful for automating complex tasks that involve multiple steps.
 */
class MacroRoutine {
private:
    std::vector<Command*> procedures; ///< A vector to hold the commands in the macro routine.

public:
    /**
     * @brief Add a command to the macro routine.
     *
     * This function takes a pointer to a Command object and adds it to the
     * list of procedures to be executed.
     *
     * @param command Pointer to the Command object to be added.
     */
    void addProcedure(Command* command);

    /**
     * @brief Remove a command from the macro routine.
     *
     * This function removes a specified Command object from the list of
     * procedures.
     *
     * @param procedure Pointer to the Command object to be removed.
     */
    void removeProcedure(Command* procedure);

    /**
     * @brief Execute all commands in the macro routine.
     *
     * This function iterates through the list of commands and calls the
     * execute() method on each one, effectively running all commands in
     * the macro routine.
     */
    void execute();

    /**
     * @brief Destructor to free dynamically allocated memory.
     *
     * This destructor ensures that any dynamically allocated Command objects
     * are properly deleted to prevent memory leaks.
     */
    ~MacroRoutine();
};

#endif // PRAC_5_MACROROUTINE_H
