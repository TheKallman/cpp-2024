#pragma once
#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
using namespace std;

class Inventory
{
private:
	int itemNumber;
	string name;
	int quantity;
	double cost;
	double totalCost;

public:
	Inventory()
	{
		itemNumber = 0;
		cost = 0;
		quantity = 0;
	}
	Inventory(int n, double c, int q)
	{
		itemNumber = n;
		cost = c;
		quantity = q;
	}
	void setItemNumber(int n);
	void setQuantity(int q);
	void setCost(double c);
	void setTotalCost();
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();
};
#endif
