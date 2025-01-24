#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

void Exercise3()
{



	// MAKE A TIE WIN CONDITION THINGY
	


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

	while (choice == 'y' || choice == 'Y')
	{
		// reset board after each game
		BOARD[0][0] = '*';
		BOARD[0][1] = '*';
		BOARD[0][2] = '*';
		
		BOARD[1][0] = '*';
		BOARD[1][1] = '*';
		BOARD[1][2] = '*';

		BOARD[2][0] = '*';
		BOARD[2][1] = '*';
		BOARD[2][2] = '*';
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
		bool tie = true;

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
			cout << "Enter your coordinates.\n";
			cout << "Type the row number: ";
			cin >> rowCoord;

			cout << "Type the column number: ";
			cin >> columnCoord;

			while (BOARD[rowCoord - 1][columnCoord - 1] != '*')
			{
				cout << "\nThat spot is already taken. Try again.\n";
				cout << "Enter your coordinates.\n";
				cout << "Type the row number: ";
				cin >> rowCoord;

				cout << "Type the column number: ";
				cin >> columnCoord;
			}
			

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
			if (BOARD[0][0] == 'X' && BOARD[0][1] == 'X' && BOARD[0][2] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
				tie = false;
			}

			if (BOARD[0][0] == 'O' && BOARD[0][1] == 'O' && BOARD[0][2] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
				tie = false;
			}


			// middle row win
			if (BOARD[1][0] == 'X' && BOARD[1][1] == 'X' && BOARD[1][2] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
				tie = false;
			}

			if (BOARD[1][0] == 'O' && BOARD[1][1] == 'O' && BOARD[1][2] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
				tie = false;
			}

			// bottom row win
			if (BOARD[2][0] == 'X' && BOARD[2][1] == 'X' && BOARD[2][2] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
				tie = false;
			}
			if (BOARD[2][0] == 'O' && BOARD[2][1] == 'O' && BOARD[2][2] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
				tie = false;
			}

			//  left column win
			if (BOARD[0][0] == 'X' && BOARD[1][0] == 'X' && BOARD[2][0] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
				tie = false;
			}
			if (BOARD[0][0] == 'O' && BOARD[1][0] == 'O' && BOARD[2][0] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
				tie = false;
			}

			// middle column win
			if (BOARD[0][1] == 'X' && BOARD[1][1] == 'X' && BOARD[2][1] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
				tie = false;
			}
			if (BOARD[0][1] == 'O' && BOARD[1][1] == 'O' && BOARD[2][1] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
				tie = false;
			}

			// right column win
			if (BOARD[0][2] == 'X' && BOARD[1][2] == 'X' && BOARD[2][2] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
				tie = false;
			}
			if (BOARD[0][2] == 'O' && BOARD[1][2] == 'O' && BOARD[2][2] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
				tie = false;
			}

			// left to right diagonal win
			if (BOARD[0][0] == 'X' && BOARD[1][1] == 'X' && BOARD[2][2] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
				tie = false;
			}
			if (BOARD[0][0] == 'O' && BOARD[1][1] == 'O' && BOARD[2][2] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
				tie = false;
			}

			// right to left diagonal win
			if (BOARD[0][2] == 'X' && BOARD[1][1] == 'X' && BOARD[0][0] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
				tie = false;
			}
			if (BOARD[0][2] == 'O' && BOARD[1][1] == 'O' && BOARD[0][0] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
				tie = false;
			}

			// tie
			if (winStatus == false && tie == true;)
			{
				cout << "It's a tie!";
				winStatus = true;
			}

			// change turn to next player
			p1Turn++;
		}
		
		cout << "\nWould you like to play another game? (y/n) >> ";
		cin >> choice;

		cout << endl;
		
		

	}
}