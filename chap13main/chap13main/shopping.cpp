#include "CashRegister.h"
#include "Inventory.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void Shopper()
{
	string name;
	int quantity;
	double cost;
	//make list of items in the store
	const int SIZE = 5;
	vector<Inventory> inventory(SIZE);
		//CashRegister("Hammer", 12, 5.00),
		//CashRegister("Wrench", 20, 4.50),
		//CashRegister("Pliers", 10, 3.00),
		//CashRegister("Ratchet", 14, 3.50),
		//CashRegister("Screwdriver", 22, 2.50) };

	for (int i = 0; i < 5; i++)
	{
		cout << "Name of item: ";
		cin >> name;
		cout << "How many items: ";
		cin >> quantity;
		cout << "Cost of item: ";
		cin >> cost;

		Inventory Inventory(name, quantity, cost);
		inventory(1).insert(name, quantity, cost)
	}
	

	cout << inventory[]
}