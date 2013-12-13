#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#include <iostream>
#include "EightQueens.cpp"
#include "EightQueensApp.cpp"

class EightQueensTest : public CppUnit::TestCase 
{
	private:
		
	public:
		void testValidSolution()
		{//Test if isLegal(...) will verify a valid solution.
			bool validBoard[8][8];

			//Create an empty board to start out with.
			for( int i = 0; i < 8; i++ )
			{//Go through each bool element and mark it to false to indicate empty spots.
				for( int j = 0; j < 8; j++ )
				{
					validBoard[j][i] = false;
				}
			}

			//Put in the queens.
			validBoard[0][0] = true;
			validBoard[1][6] = true;
			validBoard[2][4] = true;
			validBoard[3][7] = true;
			validBoard[4][1] = true;
			validBoard[5][3] = true;
			validBoard[6][5] = true;
			validBoard[7][2] = true;
			
			//Verify that isLegal(...) returns true on the valid board.
			CPPUNIT_ASSERT( EightQueens::EightQueensSolver::isLegal(validBoard) );
		}
		
		//Create the test suite using CPPUnit macros.
		CPPUNIT_TEST_SUITE( EightQueensTest );
		CPPUNIT_TEST( testValidSolution );
		//CPPUNIT_TEST_EXCEPTION( testPossibleOutOfRangeLower, std::out_of_range );
		//CPPUNIT_TEST_EXCEPTION( testPossibleOutOfRangeUpper, std::out_of_range );
		CPPUNIT_TEST_SUITE_END( );
};

int main()
{
	CPPUNIT_TEST_SUITE_REGISTRATION( EightQueensTest );
	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry( );
	runner.addTest( registry.makeTest( ) );
	if ( runner.run( ) )
	{//Runner had success.
		return 0;
	}
	else
	{//Runner failed.
		return 1;
	}
}
	
		
