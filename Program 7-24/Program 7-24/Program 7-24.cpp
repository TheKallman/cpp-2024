#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 5;
	vector<int> hours(NUM_EMPLOYEES);
	vector<double> payRate(NUM_EMPLOYEES);
	int index;

	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees "
		<< "and their hourly rate.\n";
	for (index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << "\nHours worked by employee " << (index + 1)
			<< ": ";
		cin >> hours[index];
		cout << "\nHourly rate for employee " << (index + 1)
			<< ": ";
		cin >> payRate[index];
	}

	cout << "\nHere is the gross pay for each employee.\n";
	for (index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "Employee " << (index + 1) << ": $" << (hours[index] * payRate[index]);
		cout << endl;
	}
}