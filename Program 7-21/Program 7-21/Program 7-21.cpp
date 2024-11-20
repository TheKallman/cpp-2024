#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_DIVS = 3;
	const int NUM_QTRS = 4;

	double sales[NUM_DIVS][NUM_QTRS];
	double totalSales = 0;
	int div = 0, qtr = 0;

	cout << "This program will calculate the total sales of 3 divisions"
		<< " over 4 quarters of sales.\n";
	cout << "Enter the following sales information:\n";

	for (div = 0; div < NUM_DIVS; div++)
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			cout << "Division " << (div + 1)
				<< ", Quarter " << (qtr + 1) << ": ";
			cin >> sales[div][qtr];
		}
		cout << endl;
	}
	cout << endl;

	for (div = 0; div < NUM_DIVS; div++)
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			totalSales = totalSales + sales[div][qtr];
		}
	}
	
	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales for the company are: $" << totalSales << endl;
}