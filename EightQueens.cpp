#include <iostream>

#include "EightQueens.h"

namespace EightQueensProblem
{
	bool EightQueensSolver::eightQueens( bool spotTaken[8][8], int numQueensPositioned )
	{//Does the main line of work by recursively calling itself. spotTaken is an array of bools representing a board (spaces numbered 0...7 in either direction) in which true means a queen is in that spot and false means an empty spot. numQueensPositioned specifies how many queens have already been placed. Returns true if it finds a solution, false if it doesn't.
	}

	bool EightQueensSolver::isLegal( bool chessBoard[8][8] )
	{//Tests the chess board to see if there are any queens in the same row, column or diagonal. chessBoard follows the same design as spotTaken in the eightQueens method. Returns true if no queens are in the same row, column or diagonal or returns false if finds even a single queen in the same row, column or diagonal.
		int count;//Number of queens encountered in a given row/column/diagonal.

		//Check the rows.
		for( int i = 0; i < 8; i++ )
		{
			count = 0;
			for( int j = 0; j < 8; j++ )
			{
				if( chessBoard[j][i] == true )
				{//Found a queen.
					count++;
				}

				if( count > 1 )
				{//If more than one queen has been found on this row, the board isn't legal so return false.
					return false;
				}
			}
		}

		//Check the columns.
		for( int i = 0; i < 8; i++ )
		{
			count = 0;
			for( int j = 0; j < 8; j++ )
			{
				if( chessBoard[i][j] == true )
				{//Found a queen.
					count++;
				}

				if( count > 1 )
				{//If more than one queen has been found on this column, the board isn't legal so return false.
					return false;
				}
			}
		}

		//Check the diagonals.
		for( int i
	}

	static void printBoard( bool chessBoard[8][8] )
	{//Prints out chessBoard to standard output.
		//Go through each element one by one and print - for empty and * for queen.
		for( int i = 0; i < 8; i++ )
		{
			for( int j = 0; j < 8; j++ )
			{
				if( chessBoard[j][i] == true )
				{//Queen space
					std::cout << "*";
				}
				else
				{//Empty space
					std::cout << "-";
				}

				//Print a space after the character, but not if it's the last one since only want spaces between characters.
				if( j < 7 )
				{
					std::cout << " ";
				}
			}

			//Print an endline after the current line.
			std::cout << std::endl;
	}
}
