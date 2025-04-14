#pragma once
#ifndef INVENTORYITEM_H
#define INVENTORYYITEM_H
#include <iostream>
#include <string>
using namespace std;

class InventoryItem
{
private:
	string description;
	double cost;
	int units;

public:
	// constructor 1
	InventoryItem()
	{
		//initialze description, cost, and units
		description = "";
		cost = 0.0;
		units = 0;
		cout << "Object created with constructor1\n";
	}
	//constructor 2
	InventoryItem(string desc)
	{
		//assign value to description
		description = desc;
		//initialize defauled values to members
		cost = 0.0;
		units = 0;
		cout << "Object created with constructor 2\n";
	}
	//constructor 3
	InventoryItem(string desc, double c, int u)
	{
		// assign values to description, cost, and units
		description = desc;
		cost = c;
		units = u;
		cout << "Object created with constructor3\n";
	}
	//destructor
	~InventoryItem()
	{
		cout << "\nObject destroyed!\n";
	}
	// mutator member functions (seller methods)
	void setDescription(string d)
	{
		description = d;
	}
	void setCost(double c)
	{
		cost = c;
	}
	void setUnits(int u)
	{
		units = u;
	}
	//accessor member functions (getter methods)
	string getDescription() const
	{
		return description;
	}
	double getCost() const
	{
		return cost;
	}
	int getUnits() const
	{
		return units;
	}
};
#endif

