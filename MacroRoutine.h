#ifndef PRAC_5_MACROROUTINE_H
#define PRAC_5_MACROROUTINE_H

#include <vector>
#include "Command.h"

class MacroRoutine {
private:
    std::vector<Command*> procedures;

public:
    // Add a command to the macro routine
    void addProcedure(Command* command);

    // Remove a command from the macro routine
    void removeProcedure(Command* procedure);

    // Execute all commands in the macro routine
    void execute();

    // Destructor to free dynamically allocated memory
    ~MacroRoutine();
};


#endif //PRAC_5_MACROROUTINE_H
