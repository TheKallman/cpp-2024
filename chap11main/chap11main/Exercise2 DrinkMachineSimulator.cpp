#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

struct Drinks
{
	string name = "";
	double cost = 0.0;
	int count = 20;
};

Drinks drinkArray[5];
int index2 = 0;

int vendingMenu()
{
	int choose;
	
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
	index2 = 0;
	drinkArray[index2].name = "Cola";
	drinkArray[index2].cost = 0.75;
	
	//check stock of drink
	if (drinkArray[index2].count == 0)
	{
		cout << "Some fatty drank it all. Sorry.";
	}
	else
	{
		//get money from user
		double money = 0;
		cout << "\nEnter an amount of money: ";
		cin >> money;

		//make sure user doesnt have negative or more than one dollar
		while (money < 0 || money > 1)
		{
			cout << "You can't have negative money or over a dollar money.\n";
			cout << "Enter an amount of money: ";
			cin >> money;
		}

		while (money < drinkArray[index2].cost)
		{
			cout << "Ooooh sorry, but you're poor! Enter at least " << drinkArray[index2].cost <<
				" and no more than 1 dollar.\n";
			cout << "Enter an amount of money: ";
			cin >> money;
		}

		//give user their drink
		cout << "\nHit, whack, WHAM, POWWWW, bop!\n";
		cout << "Enjoy your beverage! Maybe wait for the CO2 to go down.\n";

		//give user change
		double change = money - drinkArray[index2].cost;

		cout << "\nChange calculated: " << change << endl;
		cout << "Your change, " << change <<
			" has just dropped into the Change Dispenser.\n";

		drinkArray[index2].count--;

		cout << "\nThere are " << drinkArray[index2].count << " drinks of that type left.\n";
	}
}

void root(Drinks& drink)
{
	index2 = 1;
	drinkArray[index2].name = "Root Beer";
	drinkArray[index2].cost = 0.75;
	
	//check stock of drink
	if (drinkArray[index2].count == 0)
	{
		cout << "Some fatty drank it all. Sorry.";
	}
	else
	{
		//get money from user
		double money = 0;
		cout << "\nEnter an amount of money: ";
		cin >> money;

		//make sure user doesnt have negative or more than one dollar
		while (money < 0 || money > 1)
		{
			cout << "You can't have negative money or over a dollar money.\n";
			cout << "Enter an amount of money: ";
			cin >> money;
		}

		while (money < drinkArray[index2].cost)
		{
			cout << "Ooooh sorry, but you're poor! Enter at least " << drinkArray[index2].cost <<
				" and no more than 1 dollar.\n";
			cout << "Enter an amount of money: ";
			cin >> money;
		}

		//give user their drink
		cout << "\nHit, whack, WHAM, POWWWW, bop!\n";
		cout << "Enjoy your beverage! Maybe wait for the CO2 to go down.\n";

		//give user change
		double change = money - drinkArray[index2].cost;

		cout << "\nChange calculated: " << change << endl;
		cout << "Your change, " << change <<
			" has just dropped into the Change Dispenser.\n";

		drinkArray[index2].count--;

		cout << "\nThere are " << drinkArray[index2].count << " drinks of that type left.\n";
	}
}

void lemon(Drinks& drink)
{
	index2 = 2;
	drinkArray[index2].name = "Lemon-Lime";
	drinkArray[index2].cost = 0.75;
	
	//check stock of drink
	if (drinkArray[index2].count == 0)
	{
		cout << "Some fatty drank it all. Sorry.";
	}
	else
	{
		//get money from user
		double money = 0;
		cout << "\nEnter an amount of money: ";
		cin >> money;

		//make sure user doesnt have negative or more than one dollar
		while (money < 0 || money > 1)
		{
			cout << "You can't have negative money or over a dollar money.\n";
			cout << "Enter an amount of money: ";
			cin >> money;
		}

		while (money < drinkArray[index2].cost)
		{
			cout << "Ooooh sorry, but you're poor! Enter at least " << drinkArray[index2].cost <<
				" and no more than 1 dollar.\n";
			cout << "Enter an amount of money: ";
			cin >> money;
		}

		//give user their drink
		cout << "\nHit, whack, WHAM, POWWWW, bop!\n";
		cout << "Enjoy your beverage! Maybe wait for the CO2 to go down.\n";

		//give user change
		double change = money - drinkArray[index2].cost;

		cout << "\nChange calculated: " << change << endl;
		cout << "Your change, " << change <<
			" has just dropped into the Change Dispenser.\n";

		drinkArray[index2].count--;

		cout << "\nThere are " << drinkArray[index2].count << " drinks of that type left.\n";
	}
}

void grape(Drinks& drink)
{
	index2 = 3;
	drinkArray[index2].name = "Grape Soda";
	drinkArray[index2].cost = 0.80;
	
	//check stock of drink
	if (drinkArray[index2].count == 0)
	{
		cout << "Some fatty drank it all. Sorry.";
	}
	else
	{
		//get money from user
		double money = 0;
		cout << "\nEnter an amount of money: ";
		cin >> money;

		//make sure user doesnt have negative or more than one dollar
		while (money < 0 || money > 1)
		{
			cout << "You can't have negative money or over a dollar money.\n";
			cout << "Enter an amount of money: ";
			cin >> money;
		}

		while (money < drinkArray[index2].cost)
		{
			cout << "Ooooh sorry, but you're poor! Enter at least " << drinkArray[index2].cost <<
				" and no more than 1 dollar.\n";
			cout << "Enter an amount of money: ";
			cin >> money;
		}

		//give user their drink
		cout << "\nHit, whack, WHAM, POWWWW, bop!\n";
		cout << "Enjoy your beverage! Maybe wait for the CO2 to go down.\n";

		//give user change
		double change = money - drinkArray[index2].cost;

		cout << "\nChange calculated: " << change << endl;
		cout << "Your change, " << change <<
			" has just dropped into the Change Dispenser.\n";

		drinkArray[index2].count--;

		cout << "\nThere are " << drinkArray[index2].count << " drinks of that type left.\n";
	}
}

void cream(Drinks& drink)
{
	index2 = 4;
	drinkArray[index2].name = "Cream Soda";
	drinkArray[index2].cost = 0.80;
	
	//check stock of drink
	if (drinkArray[index2].count == 0)
	{
		cout << "Some fatty drank it all. Sorry.";
	}
	else
	{
		//get money from user
		double money = 0;
		cout << "\nEnter an amount of money: ";
		cin >> money;

		//make sure user doesnt have negative or more than one dollar
		while (money < 0 || money > 1)
		{
			cout << "You can't have negative money or over a dollar money.\n";
			cout << "Enter an amount of money: ";
			cin >> money;
		}

		while (money < drinkArray[index2].cost)
		{
			cout << "Ooooh sorry, but you're poor! Enter at least " << drinkArray[index2].cost <<
				" and no more than 1 dollar.\n";
			cout << "Enter an amount of money: ";
			cin >> money;
		}

		//give user their drink
		cout << "\nHit, whack, WHAM, POWWWW, bop!\n";
		cout << "Enjoy your beverage! Maybe wait for the CO2 to go down.\n";

		//give user change
		double change = money - drinkArray[index2].cost;

		cout << "\nChange calculated: " << change << endl;
		cout << "Your change, " << change <<
			" has just dropped into the Change Dispenser.\n";

		drinkArray[index2].count--;

		cout << "\nThere are " << drinkArray[index2].count << " drinks of that type left.\n";
	}
}

void leave()
{
	double drinksTaken;
	double drinkProfit;
	double moneyMade = 0.0;

	cout << "Thank you for using the vending machine. See ya later.\n";

	//output money gained from vending machine
	for (int i = 0; i < 5; i++)
	{
		if (drinkArray[i].count < 20)
		{
			drinksTaken = 20 - drinkArray[i].count;
			drinkProfit = drinksTaken * drinkArray[i].cost;
			moneyMade += drinkProfit;
		}
	}

	cout << "Total earnings: $" << moneyMade << endl;

}

void Exercise2()
{
	Drinks drink;
	cout << "\nWelcome to the vending machine.";
	int choose = vendingMenu();

	cout << endl;

	while (choose != 7)
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
			return;
		}
		cout << endl;
		choose = vendingMenu();
	}
}