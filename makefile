COMPILER = g++
INCLUDE_PATH = ./include
LIBS_PATH = ./libs

main: src/main.cpp
	$(COMPILER) $? -I $(INCLUDE_PATH) -L $(LIBS_PATH) -o bin/$@.o
clean:
	rm bin/*.o
