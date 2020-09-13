.PHONY: all

objs := $(BIN_DIR)/HelloWorld

all: $(objs)

$(BIN_DIR)/% : %.cpp
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $^
