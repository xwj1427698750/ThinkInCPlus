CC := g++
CFLAGS := -Wall -g

ROOT_DIR := $(shell pwd)
BUILD_DIR := $(ROOT_DIR)/build
BIN_DIR := $(BUILD_DIR)/bin
OBJ_DIR := $(BUILD_DIR)/obj
LIB_DIR := $(BUILD_DIR)/lib
DAT_DIR := $(BIN_DIR)/data

SUB_DIR := $(dir $(shell find . -maxdepth 2 -name "Makefile" | grep -v "\./Makefile" | sort))

export CC CFLAGS ROOT_DIR BIN_DIR OBJ_DIR LIB_DIR DAT_DIR

.PHONY: all clean
all: $(SUB_DIR)

$(SUB_DIR): force
	@make -C $@

force:;

clean:
	rm -rf $(BIN_DIR)