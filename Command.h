#ifndef PRAC_5_COMMAND_H
#define PRAC_5_COMMAND_H

/**
 * @class Command
 * @brief Abstract base class for implementing the Command design pattern.
 *
 * The Command class defines an interface for executing operations. It
 * includes a pure virtual function `execute()` that must be implemented
 * by derived classes. This allows for encapsulating actions and their
 * execution, enabling features such as undo/redo functionality or
 * queuing commands.
 */
class Command {
public:
    /**
     * @brief Pure virtual function to execute a command.
     *
     * This function must be overridden in derived classes to provide
     * the specific implementation for the command's execution.
     */
    virtual void execute() = 0;

    /**
     * @brief Virtual destructor for the Command class.
     *
     * The destructor is virtual to ensure proper cleanup of derived
     * classes when an object is deleted through a base class pointer.
     */
    virtual ~Command() {}
};

#endif // PRAC_5_COMMAND_H

