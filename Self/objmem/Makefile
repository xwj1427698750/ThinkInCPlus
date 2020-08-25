.PHONY: all force

objs := $(BIN_DIR)/SingleHint $(BIN_DIR)/DoubleHint

all : $(objs)

$(BIN_DIR)/SingleHint: SingleHint.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $^

$(BIN_DIR)/DoubleHint: DoubleHint.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $^
