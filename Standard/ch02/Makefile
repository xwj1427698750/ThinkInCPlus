.PHONY: all

obj := Declare Hello

binarys := $(foreach n, $(obj), $(BIN_DIR)/$(n))

all : $(binarys)

$(binarys) : $(BIN_DIR)/% : %.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<
