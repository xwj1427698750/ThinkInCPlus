.PHONY: all

objs := $(BIN_DIR)/EpollEtLtDemo $(BIN_DIR)/SelectDemo \
		$(BIN_DIR)/TestAccept

all: $(objs)

$(BIN_DIR)/% : %.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) $(C11) -o $@ $^

