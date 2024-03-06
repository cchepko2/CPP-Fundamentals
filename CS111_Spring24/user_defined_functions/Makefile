# This is a comment in a make file
CXX = clang++
PROGRAM = main.exe
FLAGS = -c -g -Wall -std=c++17
CPPFILES = main.cpp

all:
	$(CXX) $(FLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

run:
	./$(PROGRAM)

test:
	./$(PROGRAM) test

# A clean rule clears object and binary files for fresh compilation
# If in windows, use 'del' instead of 'rm'
clean:
	del $(PROGRAM) *.o