#ifndef EightQueens_h
#define EightQueens_h

namespace EightQueensProblem
{
	class EightQueensSolver
	{//A class to solve the standard 8 Queens problem using recursive backtracking.
		private:

		public:
			static bool eightQueens( bool spotTaken[8][8], int numQueensPositioned );//Does the main line of work by recursively calling itself. spotTaken is an array of bools representing a board (spaces numbered 0...7 in either direction) in which true means a queen is in that spot and false means an empty spot. numQueensPositioned specifies how many queens have already been placed. Returns true if it finds a solution, false if it doesn't.
			static bool isLegal( bool chessBoard[8][8] );//Tests the chess board to see if there are any queens in the same row, column or diagonal. chessBoard follows the same design as spotTaken in the eightQueens method. Returns true if no queens are in the same row, column or diagonal or returns false if finds even a single queen in the same row, column or diagonal.
			static void printBoard( bool chessBoard[8][8] );//Prints out chessBoard to standard output.
	}
}

#endif /* EightQueens_h */
