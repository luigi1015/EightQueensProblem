#include <iostream>
#include <stdlib.h>
#include "EightQueens.cpp"

int main( int argc, char* argv[] )
{
	bool board[8][8];
/*
	if( argc != 2 )
	{//Check if there are three arguments, indicating the two numbers as arguments.
		std::cerr << "Invalid number of arguments, the app should be called like \"" << argv[0] << " #\" where # is the number of solutions to create." << std::endl;
		return 1;
	}
	else
	{
*/
		for( int i = 0; i < 8; i++ )
		{//Go through each bool element and mark it to false to indicate empty spots.
			for( int j = 0; j < 8; j++ )
			{
				board[i][j] = false;
			}
		}

		//Create the solution by calling the eiightQueens method.
		EightQueens::eightQueens( board, 0 );
/*
	}
*/

	return 0;
}
