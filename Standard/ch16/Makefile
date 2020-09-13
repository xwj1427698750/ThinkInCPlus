.PHONY: all

objs := $(BIN_DIR)/Array

all: $(objs)

$(BIN_DIR)/%: %.cpp
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<
