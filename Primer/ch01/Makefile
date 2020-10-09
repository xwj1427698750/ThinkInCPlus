.PHONY: all 

objs := $(BIN_DIR)/AddTwoNumber \
		$(BIN_DIR)/t001 \
		$(BIN_DIR)/t002

all: $(objs)

$(BIN_DIR)/AddTwoNumber : AddTwoNumber.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/t001 : t001.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/t002 : t002.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<
