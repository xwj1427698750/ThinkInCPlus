.PHONY: all

objs := $(BIN_DIR)/Zchar

all: $(objs)

$(BIN_DIR)/% : %.c
	@echo LD ++ $@
	@gcc $(CFLAGS) -o $@ $^
