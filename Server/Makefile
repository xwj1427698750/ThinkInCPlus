.PHONY: all

objs := $(BIN_DIR)/EpollEtLtDemo

all: $(objs)

$(BIN_DIR)/EpollEtLtDemo : EpollEtLtDemo.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) $(C11) -o $@ $^
