# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++14 -g -Wall -Wextra -MMD

# Executable name
EXEC = Prac_5.exe

# Source files
SRC = main.cpp \
      Command.cpp \
      DoorLock.cpp \
      LegacyThermostat.cpp \
      Light.cpp \
      LockAllDoorsCommand.cpp \
      MacroRoutine.cpp \
      MotionSensor.cpp \
      Room.cpp \
      Section.cpp \
      SetTemperatureCommand.cpp \
      SmartComponent.cpp \
      SmartDevice.cpp \
      SmartThermostatIntegrator.cpp \
      Thermostat.cpp \
      TurnOffAllLightsCommand.cpp \
      Sensor.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Dependency files
DEP = $(OBJ:.o=.d)

# Default rule to build the executable
all: $(EXEC)

# Rule to build the executable from object files
$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $@

# Rule to compile each .cpp file into .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Include the dependency files
-include $(DEP)

# Run the executable
run: $(EXEC)
	./$(EXEC)

# Clean up build artifacts
clean:
	rm -f $(OBJ) $(DEP) $(EXEC)

# Rebuild the project
rebuild: clean all

# Phony targets (not actual files)
.PHONY: all clean rebuild run valgrind

# Valgrind command to check for memory leaks
valgrind:
	valgrind --leak-check=full -s ./$(EXEC)
