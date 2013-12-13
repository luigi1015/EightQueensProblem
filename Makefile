all: EightQueensApp

EightQueens: EightQueens.cpp EightQueens.h
	g++ -g -Wall -c EightQueens.cpp

EightQueensApp: EightQueensApp.cpp EightQueens
	g++ -g -Wall -o EightQueens EightQueensApp.cpp EightQueens.o

clean:
	rm EightQueens *.o *~ *.gch
