#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double day1, day2, day3, total;

	cout << "Please enter the sales for day 1: ";
	cin >> day1;
	cout << "Please enter the sales for day 2: ";
	cin >> day2;
	cout << "Please enter the sales for day 3: ";
	cin >> day3;

	total = day1 + day2 + day3;
	cout << "\nSales Amount\n\n";
	cout << "----------------\n";
	cout << "Day 1: " << setw(8) << "$" << day1 << endl;
	cout << "Day 2: " << setw(8) << "$" << day2 << endl;
	cout << "Day 3: " << setw(8) << "$" << day3 << endl;
	cout << "Total: " << setw(8) << "$" << total << endl;
}