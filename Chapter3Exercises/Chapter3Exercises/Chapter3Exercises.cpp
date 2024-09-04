#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "-----------------------------Rainfall---------------------------" << endl << endl;

	//initialize variables
	string month1, month2, month3;
	float rainfall1, rainfall2, rainfall3, avgRain;

	//ask for the month and amount of rain in that month
	cout << "Enter a month to record rainfall for: ";
	cin >> month1;
	cout << "Enter the rainfall for " << month1 << ": ";
	cin >> rainfall1;

	cout << "Enter a month to record rainfall for: ";
	cin >> month2;
	cout << "Enter the rainfall for " << month2 << ": ";
	cin >> rainfall2;

	cout << "Enter a month to record rainfall for: ";
	cin >> month3;
	cout << "Enter the rainfall for " << month3 << ": ";
	cin >> rainfall3;

	//calculate and output average rainfall
	avgRain = (rainfall1 + rainfall2 + rainfall3) / 3;
	
	cout << "The average rainfall for the months of " << month1 << ", " << month2
		<< ", and " << month3 << " is: " << avgRain << " inches of rain.";

	cout << "\n-----------------------------Cookies---------------------------" << endl << endl;


}
