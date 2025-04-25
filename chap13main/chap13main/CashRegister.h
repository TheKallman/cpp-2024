#pragma once
#ifndef CASHREGISTER_H
#define CASHREGISTER_H
#include <string>
using namespace std;
class CashRegister
{
private:
	string item;
	int purchaseQuantity;
	double cost;
	double markup;
	double subTotal;
	double tax;
	double total;

public:
	//constnruct
	/*CashRegister()
	{
		item = "";
		purchaseQuantity = 0;
		cost = 0.0;
		markup = 0.0;
		tax = 0.0;
		total = 0.0;
	}*/
	CashRegister(string itemName, int q)
	{
		item = itemName;
		purchaseQuantity = q;
	}

	//set
	void setItem(string i)
	{
		item = i;
	}
	void setPurchaseQuantity(int pq)
	{
		purchaseQuantity = pq;
	}
	void setCost(double c)
	{
		cost = c;
	}
	void setMarkup(double m)
	{
		markup = m;
	}
	void setSubTotal(double st)
	{
		subTotal = st;
	}
	void setTax(double t)
	{
		tax = t;
	}
	void setTotal(double tl)
	{
		total = tl;
	}

	//get
	string getItem() const
	{
		return item;
	}
	int getPurchaseQuantity() const
	{
		return purchaseQuantity;
	}
	double getCost() const
	{
		return cost;
	}
	double getMarkup() const
	{
		return markup;
	}
	double getSubTotal() const
	{
		return subTotal;
	}
	double getTax() const
	{
		return tax;
	}
	double getTotal() const
	{
		return total;
	}
};
#endif
