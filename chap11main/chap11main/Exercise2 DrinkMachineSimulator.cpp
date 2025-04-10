#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

struct Drinks
{
	string name;
	double cost;
	int count;
};

void Exercise2()
{
	Drinks drink;
	int choice = 0;

	do
	{
		// Display the menu for the user
		cout << "1)\tCola\n";
		cout << "2)\tRoot Beer\n";
		cout << "3)\tLemon-Lime\n";
		cout << "4)\tGrape Soda\n";
		cout << "5)\tCream Soda\n";
		cout << "6)\tLeave the drink machine\n";
		cout << "Choice: > ";
		cin >> choice;
	} while (choice < 1 || choice > 6);

	cout << endl;

	while (choice != 4)
	{
		switch (choice)
		{
		case 1:
			create(drink);
			break;
		case 2:
			change(drink);
			break;
		case 3:
			display(drink);
			break;
		case 4:
			exit();
		}
		cout << "\nEnter your choice: ";
		cin >> choice;
	}
}