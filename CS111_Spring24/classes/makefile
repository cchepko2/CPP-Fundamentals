CXX = clang++
CPP = main1.cpp clock.cpp
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
	rm $(PROGRAM) *.o

test:
	$(PROGRAM) test

run:
	$(PROGRAM)

all: build run clean