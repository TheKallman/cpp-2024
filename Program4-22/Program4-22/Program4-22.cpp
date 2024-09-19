#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
	const double PAY_RATE = 50.00;
	const int MIN_HOURS = 5;
	double hours, charges;

	cout << "How many hours were worked?\n>";
	cin >> hours;

	// caluclate the total charges, increasing hours worked
	// to a minimum of 5

	//if hours are less than minimum hours (5 hours) then it sets
	//hours variable to 5 because it cant be less than the minimum
	//else if the hours are more than the minimum
	//it sets hours to hours

	hours = hours < MIN_HOURS ? MIN_HOURS : hours;
	charges = hours * PAY_RATE;

	//format and output results to the user
	cout << fixed << showpoint << setprecision(2)
		<< "The charges are $" << charges << endl;
}