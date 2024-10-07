
#include "MacroRoutine.h"
#include <algorithm>

void MacroRoutine::addProcedure(Command *command) {
    procedures.push_back(command);
}

void MacroRoutine::removeProcedure(Command *procedure) {
    procedures.erase(std::remove(procedures.begin(), procedures.end(), procedure), procedures.end());

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


