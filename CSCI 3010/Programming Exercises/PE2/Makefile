# Rebecca Donohoe
# PE 2
# Makefile for a program that defines an n-dimensional point and 
# calculates the distance between the two points

CXX = g++  # the compiler
CXXFLAGS = -std=c++11 -ggdb -Wall  # flags for the compiler (use c++11 standards, include gdb debug info, turn on all optional warnings)

# runs for "make all"
all: target1

# runs for "make target1"
target1: 
	$(CXX) $(CXXFLAGS) main.cpp Point.cpp -o target1

#Runs the program
make test:
	./target1

# runs for "make clean"
clean:
	rm target1  #include all targets here
