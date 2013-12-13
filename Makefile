all: EightQueensApp

EightQueens.o: EightQueens.cpp EightQueens.h
	g++ -g -Wall -c EightQueens.cpp

EightQueensApp: EightQueensApp.cpp EightQueens.o
	g++ -g -Wall -o EightQueens EightQueensApp.cpp EightQueens.o

Test: EightQueens.o EightQueensTest.cpp EightQueensApp.cpp
	g++ -Wall -o Test EightQueensTest.cpp EightQueensApp.cpp EightQueens.o -lcppunit

clean:
	rm EightQueens *.o *~ *.gch
