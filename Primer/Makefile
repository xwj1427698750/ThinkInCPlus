.PHONY: all force

SUB_DIR := $(dir $(shell find . -maxdepth 2 -name "Makefile" | grep -v "\./Makefile" | sort))

all : $(SUB_DIR)

$(SUB_DIR) : force
	@make -C $@

force:;
