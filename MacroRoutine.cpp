
#include "MacroRoutine.h"
void MacroRoutine::addProcedure(Command *command) {
    procedures.push_back(command);
}

void MacroRoutine::removeProcedure(Command *procedure) {
    procedures.pop_back();
}

void MacroRoutine::execute() {
    for (Command* command : procedures) {
        command->execute();  // Execute each command
    }
}

MacroRoutine::~MacroRoutine() {
    for (Command* command : procedures) {
        delete command;
    }
}


