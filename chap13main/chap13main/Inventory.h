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

	Inventory(string n, int q, double c)
	{
		name = n;
		quantity = q;
		cost = c;
		setTotalCost();
	}

	void setName(int n)
	{
		name = n;
	}
	void setQuantity(int q)
	{
		quantity = q;
	}
	void changeQuantity(int q)
	{
		quantity -= q;
	}
	void setCost(double c)
	{
		cost = c;
	}
	void setTotalCost()
	{
		totalCost = cost * quantity;
	}
	string getName() const
	{
		return name;
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
