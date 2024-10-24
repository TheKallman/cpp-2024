#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void adultMembership();
void childMembership();
void seniorMembership();
void quit();

int main()
{
	//Adult = 40 dollars, Senior = 30 dollars, child = 20 dollars (per month)

	int choice = 0;
	
	
	int const senior = 30;
	
	

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
		adultMembership()

	case 2:
		childMembership()

	case 3:
		seniorMembership()

	case 4:
		quit()

	default:
		cout << "Invalid choice. Only enter values 1-4";
		break;
	}
}

void adultMembership()
{
	int const adult = 40;
	int cost;
	int months;
	cout << "For how many months? ";
	cin >> months;
	cost = adult * months;
	cout << "Your total membership fees are :$" << cost;
}

void childMembership()
{
	int const child = 20;
	int cost;
	int months;
	cout << "For how many months? ";
	cin >> months;
	cost = child * months;
	cout << "Your total membership fees are:$" << cost;

}

void seniorMembership()
{
	int const senior = 30;
	int cost;
	int months;
	cout << "For how many months? ";
	cin >> months;
	cost = senior * months;
	cout << "Your total membership fees are :$" << cost;
}

void quit()
{
	cout << "Thank you for visiting member services. Have a great day!";
}