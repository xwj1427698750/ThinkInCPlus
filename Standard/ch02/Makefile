.PHONY: all

obj := Declare Hello Stream2 Concat NumConv CallHello \
	   HelloStrings Scopy Scopy2 FillString Fillvector \
	   GetWords Intvector

binarys := $(foreach n, $(obj), $(BIN_DIR)/$(n))

all : $(binarys)

$(binarys) : $(BIN_DIR)/% : %.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<
