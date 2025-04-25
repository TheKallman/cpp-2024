#include "CashRegister.h"
#include <string>
#include <iostream>
using namespace std;

void Exercise2()
{
	//user variables
	string itemName;
	int amount;
	double price;
	double costTotal;

	//class variable
	string class_itemName;
	int class_amount;
	double class_price;
	double class_costTotal;

	cout << "\nEnter the item name: ";
	cin.ignore();
	getline(cin, itemName);

	cout << "Enter the amount of items: ";
	
	cin >> amount;

	cout << "Enter the cost of the items: ";
	cin >> price;

	//calculate cost total
	costTotal = price * amount;

	//send values to this thing to test class
	CashRegister cashregister(itemName, amount);


	class_itemName = cashregister.getItem();
	class_amount = cashregister.getPurchaseQuantity();
	class_price = cashregister.getCost();
	class_costTotal = cashregister.getTotal();

	//compare values to make sure they the same
	//	user values
	cout << "You entered\n";
	cout << "Item number: " << itemName << endl;
	cout << "Amount of items: " << amount << endl;
	cout << "Cost: " << price << endl;
	cout << "Total Cost: " << costTotal << endl << endl << endl;

	//	class values
	cout << "The class got\n";
	cout << "Item number: " << class_itemName << endl;
	cout << "Amount of items: " << class_amount << endl;
	cout << "Cost: " << class_price << endl;
	cout << "Total Cost: " << class_costTotal << endl << endl << endl;

}
