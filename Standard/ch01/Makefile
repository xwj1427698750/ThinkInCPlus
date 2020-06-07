.PHONY: all

objs := $(BIN_DIR)/HelloWorld

all: $(objs)

$(BIN_DIR)/HelloWorld: HelloWorld.cpp
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<