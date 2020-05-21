BIN_DIR := bin
OBJ_DIR := $(BIN_DIR)/obj
LIB_DIR := libs

SRC_EXE_S_01 := HelloWorld.cpp
SRC_EXE_S_02 := CallHello.cpp Concat.cpp
SRC_EXE := $(patsubst %, Standard/ch01/%, $(SRC_EXE_S_01))
SRC_EXE += $(patsubst %, Standard/ch02/%, $(SRC_EXE_S_02))

OBJ_EXE := $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(notdir $(SRC_EXE)))

EXE := $(OBJ_EXE:$(OBJ_DIR)/%.o=$(BIN_DIR)/%)

INC_DIR := $(patsubst %, -I%, $(shell find Standard -type d))

CC := g++
CFLAGS := -g -W -Wall $(INC_DIR)

.SECONDARY: $(OBJ_EXE)

.PHONY: all
all: $(EXE)

$(OBJ_EXE): $(filter $(patsubst %.o, %, $(notdir $@)), $(SRC_EXE))
	@echo + CC $@ $^
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(BIN_DIR)/%: $(OBJ_DIR)/%.o
	@echo ++ LD $@
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean
clean:
	rm -rf $(BIN_DIR)
	rm -rf $(LIB_DIR)