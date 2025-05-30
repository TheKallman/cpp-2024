#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main()
{
	const int SIZE = 5;
	InventoryItem inventory[SIZE] = {
		InventoryItem("Hammer", 6.95, 12),
		InventoryItem("Wrench", 8.72, 20),
		InventoryItem("Pliers", 3.75, 10),
		InventoryItem("Ratchet", 7.95, 14),
		InventoryItem("Screwdriver", 2.50, 22) };

	cout << setw(14) << "Inventory Item"
		<< setw(8) << "Cost" << setw(8)
		<< setw(16) << "Units on Hand\n";
	cout << "--------------------------------\n";

	for (int i = 0; i < SIZE; i++)
	{
		cout << setw(14) << inventory[i].getDescription();
		cout << setw(8) << inventory[i].getCost();
		cout << setw(7) << inventory[i].getUnits() << endl;
	}
}