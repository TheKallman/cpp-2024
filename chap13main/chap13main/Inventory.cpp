#include "Inventory.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void Exercise1()
{
	int itemNum;
	int amount;
	double price;
	double costTotal;

	cout << "Enter the item number: ";
	cin >> itemNum;

	cout << "Enter the amount of items: ";
	cin >> amount;

	cout << "Enter the cost of the items: ";
	cin >> price;

	Inventory(itemNum, amount, price)
}
