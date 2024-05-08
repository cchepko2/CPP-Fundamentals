CXX = clang++
CPP = main.cpp a_really_big_function.cpp
FLAGS = -c -g -Wall -std=c++17
PROGRAM = main.exe

# 2-step build: produces object (.o) files for each CPP file
# For large project with lots of files this can save time
# can combine into one line
# $(CXX) $(CPP) $(FLAGS) -o $(PROGRAM)
build:
	$(CXX) $(CPP) $(FLAGS) 
	$(CXX) -o $(PROGRAM) *.o

clean:
	rm $(PROGRAM) *.object

test:
	$(PROGRAM) test

run:
	./$(PROGRAM)