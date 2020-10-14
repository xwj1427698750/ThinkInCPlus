.PHONY: all

obj := HelloWorld

binarys := $(foreach n, $(obj), $(BIN_DIR)/$(n))

all : $(binarys)

$(binarys) : $(BIN_DIR)/% : %.cpp
	@mkdir -p $(@D)
	@echo ++ LD $@
	@$(CC) $(CFLAGS) -o $@ $<
