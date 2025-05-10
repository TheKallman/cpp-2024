#pragma once
#ifndef BACKPACK_H
#define BACKPACK_H
#include <string>
#include <vector>
using namespace std;
class Backpack
{
private:
	string itemName; //name of the item you have
	int amount; //how many of the item you have
	vector<string> pockets;

public:
	void addItem(string item);

	Backpack()
	{
		itemName = "";
		amount = 0;
	}
	Backpack(string n, int a) //n for name, a for amount
	{
		itemName = n;
		amount = a;
	}

	//setters
	void setName(int n)
	{
		itemName = n;
	}
	void setAmount(int a)
	{
		amount = a;
	}

	//getters
	string getName()
	{
		return itemName;
	}
	int getAmount()
	{
		return amount;
	}
};
#endif
