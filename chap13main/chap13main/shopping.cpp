#include "CashRegister.h"
#include "Inventory.h"
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void Shopper()
{
	string name;
	int quantity;
	double cost;
	double markedCost;

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
		cin >> name;
		cout << "How many items: ";
		cin >> quantity;
		cout << "Cost of item: ";
		cin >> cost;
		cout << endl;

		markedCost = cost + (cost * 0.30);

		Inventory Inventory(name, quantity, markedCost);
		invVec.push_back(Inventory);
	}
	
	//test
	cout << invVec[1].getName();

	cout << "\nHere are the items in the store:\n";
	cout << "Name\t\tQuantity\t\tCost\n";
	cout << "-------------------------------------------------------\n";
	for (int p = 0; p < 5; p++)
	{
		cout << invVec[p].getName() << "\t\t" << invVec[p].getQuantity()
			<< "\t\t" << fixed << setprecision(2) << invVec[p].getCost() << endl;
	}

	cout << "Choose something to buy yo!";
}