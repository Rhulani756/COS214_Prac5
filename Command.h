
#ifndef PRAC_5_COMMAND_H
#define PRAC_5_COMMAND_H


class Command {
public:
    // Pure virtual function to be implemented by derived classes
    virtual void execute() = 0;

    // Virtual destructor
    virtual ~Command() {}

};


#endif //PRAC_5_COMMAND_H
