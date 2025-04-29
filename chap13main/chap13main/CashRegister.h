#pragma once
#ifndef CASHREGISTER_H
#define CASHREGISTER_H
#include <string>
using namespace std;
class CashRegister
{
private:
	int purchaseQuantity;
	double cost;
	double const markup = 0.30;
	double subTotal;
	double const tax = 0.06;
	double total;

public:
	//constnruct
	CashRegister()
	{
		purchaseQuantity = 0;
		cost = 0.0;
		total = 0.0;
	}

	CashRegister(string itemName, int q, double c)
	{
		purchaseQuantity = q;
		
	}

	//set
	//void setItem(string i)
	//{
	//}
	void setPurchaseQuantity(int pq)
	{
		purchaseQuantity = pq;
	}
	void setCost(double c)
	{
		cost = c;
	}
	void setSubTotal(double st)
	{
		subTotal = st;
	}
	void setTotal(double tl)
	{
		total = tl;
	}

	//get
	//string getItem() const
	//{
	//	return item;
	//}
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
