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

	Inventory(int n, int q, double c)
	{
		itemNumber = n;
		quantity = q;
		cost = c;
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
	int getItemNumber() const
	{
		return itemNumber;
	}
	int getQuantity() const
	{
		return quantity;
	}
	double getCost() const
	{
		return cost;
	}
	double getTotalCost() const
	{
		return totalCost;
	}
};
#endif
