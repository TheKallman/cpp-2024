#include <iostream>
using namespace std;
int Sales_Prediction()
{
	auto percentage = 0.58;
	auto scenario1 = 8.6;
	auto scenario2 = 10;

	auto estimate1 = scenario1 * percentage;
	auto estimate2 = scenario2 * percentage;

	cout << "If total sales are " << scenario1 << " million, the Midwest division is estimated to generate " << estimate1 << " million.";
	cout << "If total sales are " << scenario2 << " million, the Midwest division is estimated to generate " << estimate2 << " million.";
}