#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

void Exercise3()
{
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
		bool p1Turn = true;
		
		// change thing by matrix[row][col] = value;
	}
}