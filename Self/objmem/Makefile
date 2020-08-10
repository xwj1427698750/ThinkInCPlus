.PHONY: all force

objs := $(BIN_DIR)/SingleHint

all : $(objs)

$(BIN_DIR)/SingleHint: SingleHint.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $^
