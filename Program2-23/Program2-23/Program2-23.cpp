#include <iostream>
using namespace std;
int main()
{
	auto price = 59.95;
	auto discount = 0.2;

	auto discountedAmount = price * discount;
	auto salePrice = price - discountedAmount;

	cout << "Regular Price: $" << price << endl;
	cout << "Discount Amount: $" << discountedAmount << endl;
	cout << "Sale Price: $" << salePrice << endl;
}