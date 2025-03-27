CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -I.
SRC = weather.c
HEADER = weather.h
TEST_SRC = test_weather.c
TARGET = weather
TEST_TARGET = run_tests
BIN_DIR = bin

# Default target - compile the program
all: $(BIN_DIR) $(BIN_DIR)/$(TARGET)

# Create bin directory if it doesn't exist
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Compile the main program
$(BIN_DIR)/$(TARGET): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -o $@ $(SRC)

# Compile the test program - note the -DTESTING flag
$(BIN_DIR)/$(TEST_TARGET): $(TEST_SRC) $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -DTESTING -o $@ $(TEST_SRC) $(SRC)

# Run the main program
run: all
	./$(BIN_DIR)/$(TARGET)
	$(MAKE) clean

# Build and run the test program
test: $(BIN_DIR) $(BIN_DIR)/$(TEST_TARGET)
	./$(BIN_DIR)/$(TEST_TARGET)

# Run test and clean up after
test-run: test
	$(MAKE) clean

# Clean up - remove the bin directory and its contents
clean:
	rm -rf $(BIN_DIR)

# Declare phony targets (targets that don't create files)
.PHONY: all run test test-run clean