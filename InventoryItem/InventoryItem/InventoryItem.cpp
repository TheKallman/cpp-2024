#include "InventoryItem.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// create an object with constructor 1
	InventoryItem item1;
	item1.setDescription("Hammer");
	item1.setCost(6.95);
	item1.setUnits(12);

	// create an object with constructor 2
	InventoryItem item2("Pliers");
	
	// create an object with construcor 3
	InventoryItem item3("Wrench", 8.75, 30);

	//set formatting
	cout << "\nThe following items are in inventory...\n";
	cout << fixed << showpoint << setprecision(2);

	//display data for item1
	cout << "\nDescription: " << item1.getDescription() << endl;
}