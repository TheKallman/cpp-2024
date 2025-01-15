#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

void Exercise3()
{




	//MAKE LABEL ON TICTACTOE BOARD FOR ROW AND COLUMN
	//MAKE TURN SYSTEM






	// initalized borad
	const char BOARD[3][3] = { {'*', '*', '*'},
							   {'*', '*', '*'},
							   {'*', '*', '*'} };

	// ask user if they want to play
	char choice;
	cout << "\nWould you like to play a game? (y/n)\n";
	cin >> choice;

	if (choice == 'y' || choice == 'Y')
	{
		// show board
		for (int row = 0; row < 3; row++)
		{
			for (int col = 0; col < 3; col++)
			{
				cout << BOARD[row][col];
			}
			cout << endl;
		}

		// start gaming
		cout << "Player One goes first (X's)." << endl;
		
		// bool for p1 turn
		int p1Turn = 1;
		bool winStatus = false;

		// initialize make coordiante place for players
		int rowCoord;
		int columnCoord;

		while (winStatus == false)
		{
			// change letter for each turn
			if (p1Turn == 1 || p1Turn == 3 || p1Turn == 5 || p1Turn == 7 || p1Turn == 9)
				char letter = 'X';
			else char letter = 'O';

			cout << "Type your coordinates";



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
			if (BOARD[1][0] == BOARD[1][1] == BOARD[1][2] == 'X')
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
			if (BOARD[2][0] == BOARD[2][1] == BOARD[2][2] == 'X')
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
			if (BOARD[0][0] == BOARD[1][0] == BOARD[2][0] == 'X')
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
			if (BOARD[0][1] == BOARD[1][1] == BOARD[2][1] == 'X')
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
			if (BOARD[0][2] == BOARD[1][2] == BOARD[2][2] == 'X')
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
			if (BOARD[0][0] == BOARD[1][1] == BOARD[2][2] == 'X')
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
			if (BOARD[0][2] == BOARD[1][1] == BOARD[0][0] == 'X')
			{
				cout << "Player One wins!";
				winStatus = true;
			}
			else if (BOARD[0][2] == BOARD[1][1] == BOARD[0][0] == 'O')
			{
				cout << "Player Two wins!";
				winStatus = true;
			}




			p1Turn++;
		}
		
			
		// change thing by matrix[row][col] = value;

		// top row win
		

	}
}