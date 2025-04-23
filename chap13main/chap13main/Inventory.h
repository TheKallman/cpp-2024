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
		setTotalCost();
	}

	Inventory(int n, double c, int q)
	{
		itemNumber = n;
		cost = c;
		quantity = q;
		setTotalCost();
	}

	void setItemNumber(int n)
	{
		itemNumber = n;
	}
	void setQuantity(int q)
	{
		quantity = q;
	}
	void setCost(double c)
	{
		cost = c;
	}
	void setTotalCost()
	{
		totalCost = cost * quantity;
	}
	int getItemNumber()
	{
		return itemNumber;
	}
	int getQuantity()
	{
		return quantity;
	}
	double getCost()
	{
		return cost;
	}
	double getTotalCost()
	{
		return totalCost;
	}
};
#endif
