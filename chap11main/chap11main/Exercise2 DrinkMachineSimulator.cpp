#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

struct Drinks
{
	string name = "";
	double cost = 0.0;
	int count = 0;
};

int vendingMenu()
{
	int choose = 0;
	do
	{
		// Display the menu for the user
		cout << "\n1) Cola\t\t\t0.75\n";
		cout << "2) Root Beer\t\t0.75\n";
		cout << "3) Lemon-Lime\t\t0.75\n";
		cout << "4) Grape Soda\t\t0.80\n";
		cout << "5) Cream Soda\t\t0.80\n";
		cout << "6) Leave the drink machine\n";
		cout << "Choose one: ";
		cin >> choose;
	} while (choose < 1 || choose > 6);
	return choose;
}
void cola(Drinks& drink)
{
	drink.name = "Cola";
	drink.cost = 0.75;
	drink.count = 20;

	//get money from user
	double money = 0;
	cout << "Enter an amount of money: ";
	cin >> money;

	//give user their drink
	cout << "Hit, whack, WHAM, POWWWW, bop!";
	cout << "Enjoy your beverage! Maybe wait for the CO2 to go down.";

	//give change if needed
	double change = money - drink.cost;
}

void root(Drinks& drink)
{
	drink.name = "Root Beer";
	drink.cost = 0.75;
	drink.count = 20;
}

void lemon(Drinks& drink)
{
	drink.name = "Lemon-Lime";
	drink.cost = 0.75;
	drink.count = 20;
}

void grape(Drinks& drink)
{
	drink.name = "Grape Soda";
	drink.cost = 0.80;
	drink.count = 20;
}

void cream(Drinks& drink)
{
	drink.name = "Cream Soda";
	drink.cost = 0.80;
	drink.count = 20;
}

void leave()
{
	cout << "Thank you for using the vending machine. See ya later.";
}

void Exercise2()
{
	Drinks drink;
	cout << "\nWelcome to the vending machine.";
	int choose = vendingMenu();

	cout << endl;

	while (choose != 6)
	{
		switch (choose)
		{
		case 1:
			cola(drink);
			break;
			
		case 2:
			root(drink);
			break;
		case 3:
			lemon(drink);
			break;
		case 4:
			grape(drink);
			break;
		case 5:
			cream(drink);
			break;
		case 6:
			leave();
		}
		cout << endl;
		choose = vendingMenu();
		cin >> choose;
	}
}