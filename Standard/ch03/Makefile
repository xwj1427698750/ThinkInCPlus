.PHONY: all

objs := Return Ifthen Guess Guess2 Charlist Menu \
		Menu2 GotoKeyword CatsInHats AutoIncrement Basic \
		Specify YourPets1 YourPets2 PassByAddress PassByValue \
		PassReference AllDefinitions VoidPointer CastFromVoidPointer \
		Scope OnTheFly Static Mathops Boolean CommaOperator SimpleCast \
		FunctionCallCast StaticCast ConstCast ReinterpretCast \
		Sizeof SizeofOperator SimpleStruct SimpleStruct2 SelfReferential \
		SimpleStruct3 Enum Union Array StructArray ArrayAddresses \
		ArrayIdentifier PointersAndBrackets ArrayArguments \
		PointerIncrement PointerIncrement2 PointerArithmetic \
		DynamicDebugFlags StringizingExpressions Assert

binarys := $(foreach n, $(objs), $(BIN_DIR)/$(n))

lbin := $(BIN_DIR)/Global $(BIN_DIR)/FileStatic $(BIN_DIR)/Bitwise \
		$(BIN_DIR)/FloatingAsBinary

all : $(binarys) $(lbin)

$(binarys) : $(BIN_DIR)/% : %.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/Global : Global.cpp Global2.cpp
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $^

$(BIN_DIR)/FileStatic : FileStatic.cpp FileStatic2.cpp
	@# echo LD ++ $@
	@# can't not linker, because static 
	@# @$(CC) $(CFLAGS) -o $@ $^

$(BIN_DIR)/Bitwise : Bitwise.cpp PrintBinary.cpp PrintBinary.h
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $^

$(BIN_DIR)/FloatingAsBinary : FloatingAsBinary.cpp PrintBinary.cpp PrintBinary.h
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $^
