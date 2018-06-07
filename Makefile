EXE_FILE = suduko_solver
CC = g++ -Wall

all:$(EXE_FILE)

$(EXE_FILE): gameBoard.o main.cpp
		$(CC) gameBoard.o main.cpp -o suduko_solver

gameBoard.o: gameboard.cpp gameboard.hpp
		$(CC) -c gameBoard.cpp
