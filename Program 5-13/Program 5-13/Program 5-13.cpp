// Program 5-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int game;
	int points = 0;
	int total = 0;

	cout << "Enter the points your team has earned per game, \n"
		<< "Enter -1 when you have entered all scores.\n";

	for (game = 1; points != -1; game++)
	{
		cout << "Enter the points for game " << game << ": ";
		cin >> points;

		total += points;

		if (points == -1)
		{
			total++;
		}
	}

	cout << "Your team scored a total of " << total << " points.";
}
