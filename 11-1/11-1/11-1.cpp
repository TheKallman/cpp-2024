#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct PayRoll
{
	double hours;
	int empNumber;
	string name;
	double payRate;
	double grossPay;
};

/*###################
# main accepts no arguments
# it uses the PayRoll structure to declare
# a new PayRoll object for an employee and
# then promp the user for employee number, name
# and payrate, then calculate thegross pay
# and output all data to the user
######################*/

int main()
{
	// define employee as a payroll strucutre
	PayRoll employee;

	// Get input from the user for the employee's data
	cout << "Enter the employee's number, numeric values only: ";
	cin >> employee.empNumber;

	cout << "Enter the employee's name: ";
	cin.ignore();
	getline(cin, employee.name);

	cout << "Enter the hours worked: ";
	cin >> employee.hours;

	cout << "Enter the employee's hourly pay rate: ";
	cin >> employee.payRate;


	employee.grossPay = employee.hours * employee.payRate;
	cout << showpoint << fixed << setprecision(2);

	cout << "\nHere is the employee's payroll data:\n";
	cout << "Name: " << employee.name << endl;
	cout << "Employee Number: " << employee.empNumber << endl;
	cout << "Hours worked: " << employee.hours << endl;
	cout << "Hourly pay rate: " << employee.payRate << endl;
	cout << "Gross pay: " << employee.grossPay << endl;
}