#include "Inventory.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void Exercise1()
{

	

	//user variables
	string name;
	int amount;
	double price;
	double costTotal;

	//class variable
	int class_itemNum;
	int class_amount;
	double class_price;
	double class_costTotal;

	cout << "\nEnter the item name: ";
	cin.ignore();
	getline(cin, name);

	cout << "Enter the amount of items: ";
	cin >> amount;

	cout << "Enter the cost of the items: ";
	cin >> price;

	//calculate cost total
	costTotal = price * amount;

	//send values to this thing to test class
	Inventory inventory(name, amount, price);


	//class_itemNum = inventory.getName();
	class_amount = inventory.getQuantity();
	class_price = inventory.getCost();
	class_costTotal = inventory.getTotalCost();

	//compare values to make sure they the same
	//	user values
	cout << "You entered\n";
	cout << "Item number: " << name << endl;
	cout << "Amount of items: " << amount << endl;
	cout << "Cost: " << price << endl;
	cout << "Total Cost: " << costTotal << endl << endl << endl;

	//	class values
	cout << "The class got\n";
	//cout << "Item number: " << class_itemNum << endl;
	cout << "Amount of items: " << class_amount << endl;
	cout << "Cost: " << class_price << endl;
	cout << "Total Cost: " << class_costTotal << endl << endl << endl;

}
