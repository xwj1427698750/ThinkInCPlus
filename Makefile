# File path
BIN_DIR := ./bin
OBJ_DIR := ./bin/obj
STANDARD_DIR := ./Standard
ADVANCE_DIR := ./Advance

# File to be compiled
SRC := $(wildcard $(STANDARD_DIR)/ch01/*.cpp $(STANDARD_DIR)/ch02/*.cpp)
SRC += $(wildcard $(STANDARD_DIR)/test/*.cpp)
OBJ := $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(notdir $(SRC)))
INC := $(patsubst %, -I%, $(shell find . -name '[a-zA-Z0-9]*'.h))
EXE := $(OBJ:$(OBJ_DIR)/%.o=$(BIN_DIR)/%) 

CC := g++
LD := g++
CFLAGS := -g -Wall

# Don't remove *.o files automatically
.SECONDARY: $(OBJ)

all: $(EXE)

# Compile each *.c file as *.o files
$(OBJ_DIR)/%.o: $(STANDARD_DIR)/ch01/%.cpp
	@echo + CC $<
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/%.o: $(STANDARD_DIR)/ch02/%.cpp
	@echo + CC $<
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR)/%.o: $(STANDARD_DIR)/test/%.cpp
	@echo + CC $<
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(BIN_DIR)/%: $(OBJ_DIR)/%.o
	@echo + LD $@
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) -o $@ $<

.PHONY: all clean

clean:
	rm -rf $(BIN_DIR)