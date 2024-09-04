#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const double COST_PER_CUBIC_FOOT = 0.23;
	const double CHARGE_PER_CUBIC_FOOT = 0.5;

	double length, width, height, volume, cost, charge, profit;

	cout << "What is the length of the crate? ";
	cin >> length;
	cout << "What is the width of the crate? ";
	cin >> width;
	cout << "What is the height of the crate? ";
	cin >> height;

	volume = length * width * height;
	cost = volume * COST_PER_CUBIC_FOOT;
	charge = volume * CHARGE_PER_CUBIC_FOOT;
	profit = charge - cost;

	cout << "\nYour crate's volume is: " << volume << endl
		<< "Your cost to build the crate is: $" << cost << endl
		<< "Your customer's charge for the crate is: $" << charge << endl
		<< "Your profit is: $" << profit << endl;
}