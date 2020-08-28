.PHONY: all

objs := $(BIN_DIR)/EpollEtLtDemo $(BIN_DIR)/SelectDemo

all: $(objs)

$(BIN_DIR)/EpollEtLtDemo : EpollEtLtDemo.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) $(C11) -o $@ $^

$(BIN_DIR)/SelectDemo : SelectDemo.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) $(C11) -o $@ $^

