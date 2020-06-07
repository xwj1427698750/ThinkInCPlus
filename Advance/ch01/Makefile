.PHONY: all

objs := $(BIN_DIR)/Nonlocal

all: $(objs)

$(BIN_DIR)/Nonlocal: Nonlocal.cpp
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<