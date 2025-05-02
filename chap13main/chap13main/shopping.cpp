#include "CashRegister.h"
#include "Inventory.h"
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
using namespace std;

int index = 0;
void Shopper()
{
	string name;
	string itemChosen;
	int quantity;
	int quantityChosen;
	double cost;
	double markedCost;

	char reshop = 'y';

	//make list of items in the store
	vector<Inventory> invVec;
		//CashRegister("Hammer", 12, 5.00),
		//CashRegister("Wrench", 20, 4.50),
		//CashRegister("Pliers", 10, 3.00),
		//CashRegister("Ratchet", 14, 3.50),
		//CashRegister("Screwdriver", 22, 2.50) };

	cout << "\n";
	
	
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Name of item: ";
		cin.ignore();
		getline(cin, name);
		cout << "How many items: ";
		cin >> quantity;
		cout << "Cost of item: ";
		cin >> cost;
		cout << endl;

		markedCost = cost + (cost * 0.30);

		Inventory Inventory(name, quantity, markedCost);
		invVec.push_back(Inventory);
	}
	while (tolower(reshop) == 'y')
	{
		

		//output formatted menu
		cout << "\nHere are the items in the store:\n";
		cout << "Name\t\tQuantity\t\tCost\n";
		cout << "-------------------------------------------------------\n";
		for (int p = 0; p < 5; p++)
		{
			cout << invVec[p].getName() << "\t\t" << invVec[p].getQuantity()
				<< "\t\t" << fixed << setprecision(2) << invVec[p].getCost() << endl;
		}

		//ask user to buy something
		cout << "\nChoose something to buy yo!\n";
		cout << "I want to buy: ";
		cin.ignore();
		getline(cin, itemChosen);

		//redo if user types in something not in list
		while (itemChosen != invVec[0].getName() && itemChosen != invVec[1].getName() && itemChosen != invVec[2].getName() && itemChosen != invVec[3].getName() && itemChosen != invVec[4].getName())
		{
			cout << "\nI can't find: " << itemChosen << "\nTry again.\n";
			cout << "I want to buy: ";
			getline(cin, itemChosen);
		}

		//get the right item index to find the same item's quantity and cost
		if (itemChosen == invVec[0].getName())
		{
			index = 0;
		}
		if (itemChosen == invVec[1].getName())
		{
			index = 1;
		}
		if (itemChosen == invVec[2].getName())
		{
			index = 2;
		}
		if (itemChosen == invVec[3].getName())
		{
			index = 3;
		}
		if (itemChosen == invVec[4].getName())
		{
			index = 4;
		}

		//get how many user wants to buy
		cout << "\nI want to buy this many " << itemChosen << "s: ";
		cin >> quantityChosen;

		//redo if user goes over the stock number of the item or if user inputs non-number
		while (quantityChosen > invVec[index].getQuantity() || !isdigit(quantityChosen))
		{
			cout << "\nYou either put a number above the amount stocked " <<
				"or not a number at all.\nPlease input a number lower " <<
				"than or the same as the amount stocked.\n";

			cout << "Here is a reminder on how many " << itemChosen << "s are stocked\n";
			cout << invVec[index].getQuantity() << endl;
			cout << "I want to buy this many " << itemChosen << "s: ";
			cin >> quantityChosen;

		}

		//subtract amount bought from original
		int itemQuantity = invVec[index].getQuantity();
		itemQuantity -= quantityChosen;

		//calculate how much purchase will cost
		double itemCost = invVec[index].getCost();
		double subTotal = itemCost * quantityChosen;

		//calculate purchase with tax
		double total = subTotal + (subTotal * 0.06);

		//output
		cout << "\nSubtotal: $" << subTotal << endl <<
			"Total: $" << total << endl <<
			"Thank you for shopping at Z - Mart";

		//rerun shopping
		cout << "\n\nWould you like to buy something else? (y/n)\n"
			<< ">>";
		cin >> reshop;
	}
}