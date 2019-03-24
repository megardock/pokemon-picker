COMPILER = g++

main: src/main.cpp
	$(COMPILER) $? -o bin/$@.o

clean:
	rm bin/*.o
