#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	//Adult = 40 dollars, Senior = 30 dollars, child = 20 dollars (per month)

	int choice = 0;
	int months;
	int const adult = 40;
	int const senior = 30;
	int const child = 20;
	int cost;

	cout << "Health Club Membership Menu\n";
	cout << "1.\tStandard Adult Membership\n";
	cout << "2.\tChild Membership\n";
	cout << "3.\tSenior Citizen Membership\n";
	cout << "4.\tQuit the Program\n";

	cout << endl << "Enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "For how many months? ";
		cin >> months;
		cost = adult * months;
		cout << "Your total membership fees are :$" << cost;
		break;

	case 2:
		cout << "For how many months? ";
		cin >> months;
		cost = senior * months;
		cout << "Your total membership fees are :$" << cost;
		break;

	case 3:
		cout << "For how many months? ";
		cin >> months;
		cost = child * months;
		cout << "Your total membership fees are:$" << cost;
		break;

	case 4:
		cout << "Thank you for visiting member services. Have a great day!";
		break;

	default:
		cout << "Invalid choice. Only enter values 1-4";
		break;
	}
}