.PHONY: all

objs := $(BIN_DIR)/Reference $(BIN_DIR)/ConstReferenceArguments \
	$(BIN_DIR)/ReferenceToPointer $(BIN_DIR)/PassingBigStructures \
	$(BIN_DIR)/HowMany $(BIN_DIR)/HowMany2  $(BIN_DIR)/Linenum \
	$(BIN_DIR)/DefaultCopyConstructor

all: $(objs)

$(BIN_DIR)/Reference: Reference.cpp
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/ConstReferenceArguments: ConstReferenceArguments.cpp
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/ReferenceToPointer: ReferenceToPointer.cpp
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/PassingBigStructures: PassingBigStructures.cpp
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/HowMany: HowMany.cpp
	@mkdir -p $(@D)
	@mkdir -p $(DAT_DIR)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/HowMany2: HowMany2.cpp
	@mkdir -p $(@D)
	@mkdir -p $(DAT_DIR)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/Linenum: Linenum.cpp
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/DefaultCopyConstructor: DefaultCopyConstructor.cpp
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<