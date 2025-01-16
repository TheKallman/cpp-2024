#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

void Exercise3()
{



	//FIX WINNING CONDITION THINGY
	//FIX PUTTING SAME COORDINATE TWICE


	int rowNum = 1;


	// initalized borad
	char BOARD[3][3] = { {'*', '*', '*'},
						 {'*', '*', '*'},
						 {'*', '*', '*'} };

	// ask user if they want to play
	char choice;
	cout << "\nWould you like to play a game? (y/n) >> ";
	cin >> choice;

	cout << endl;

	if (choice == 'y' || choice == 'Y')
	{
		// show board

		//column numbers
		cout << "       Column\n\t123\n";
		for (int row = 0; row < 3; row++)
		{
			//row numbers
			cout << "Row " << rowNum << ":  ";
			rowNum++;

			for (int col = 0; col < 3; col++)
			{
				cout << BOARD[row][col];
			}
			cout << endl;
		}

		cout << endl;

		// start gaming
		cout << "Player One goes first (X's)." << endl;
		
		// bool for p1 turn
		int p1Turn = 1;
		bool winStatus = false;

		// initialize make coordiante place for players
		int rowCoord;
		int columnCoord;
		char letter;

		while (winStatus != true)
		{
			// reset row number to not make row number go to 29
			rowNum = 1;

			// change letter for each turn
			if (p1Turn == 1 || p1Turn == 3 || p1Turn == 5 || p1Turn == 7 || p1Turn == 9 || p1Turn == 11)
				letter = 'X';
			else letter = 'O';

			// GET SPOT TO PLACE X OR O

			cout << "Enter your coordinates\n";
			cout << "Type the row number: ";
			cin >> rowCoord;

			cout << "Type the column number: ";
			cin >> columnCoord;

			BOARD[rowCoord - 1][columnCoord - 1] = letter;

			// PRINT BOARD

			cout << endl;

			//column numbers
			cout << "       Column\n\t123\n";
			for (int row = 0; row < 3; row++)
			{
				//row numbers
				cout << "Row " << rowNum << ":  ";
				rowNum++;

				for (int col = 0; col < 3; col++)
				{
					cout << BOARD[row][col];
				}
				cout << endl;
			}

			cout << endl;


			//CHECK WINS

			// top row win
			if (BOARD[0][0] == BOARD[0][1] == BOARD[0][2] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
			}

			else if (BOARD[0][0] == BOARD[0][1] == BOARD[0][2] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
			}


			// middle row win
			else if (BOARD[1][0] == BOARD[1][1] == BOARD[1][2] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
			}

			else if (BOARD[1][0] == BOARD[1][1] == BOARD[1][2] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
			}

			// bottom row win
			else if (BOARD[2][0] == BOARD[2][1] == BOARD[2][2] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
			}
			else if (BOARD[2][0] == BOARD[2][1] == BOARD[2][2] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
			}

			//  left column win
			else if (BOARD[0][0] == BOARD[1][0] == BOARD[2][0] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
			}
			else if (BOARD[0][0] == BOARD[1][0] == BOARD[2][0] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
			}

			// middle column win
			else if (BOARD[0][1] == BOARD[1][1] == BOARD[2][1] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
			}
			else if (BOARD[0][1] == BOARD[1][1] == BOARD[2][1] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
			}

			// right column win
			else if (BOARD[0][2] == BOARD[1][2] == BOARD[2][2] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
			}
			else if (BOARD[0][2] == BOARD[1][2] == BOARD[2][2] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
			}

			// left to right diagonal win
			else if (BOARD[0][0] == BOARD[1][1] == BOARD[2][2] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
			}
			else if (BOARD[0][0] == BOARD[1][1] == BOARD[2][2] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
			}

			// right to left diagonal win
			else if (BOARD[0][2] == BOARD[1][1] == BOARD[0][0] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
			}
			else if (BOARD[0][2] == BOARD[1][1] == BOARD[0][0] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
			}

			// change turn to next player
			p1Turn++;
		}
		
			
		
		

	}
}