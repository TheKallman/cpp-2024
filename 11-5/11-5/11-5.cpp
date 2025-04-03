#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Date
{
	string month;
	int day, year;
};

struct Place
{
	string address;
	string city;
	string state;
	int zip;
};

struct EmployeeInfo
{
	string name;
	int empNumber;
	Date dData;
	Place pData;
};

int main()
{
	EmployeeInfo e;
	cout << "What month were you born? ";
	cin >> e.dData.month;

	cout << "What day were you born? ";
	cin >> e.dData.day;

	cout << "What year wer you born? ";
	cin >> e.dData.year;

	cout << "What is your address? ";
	cin.ignore();
	getline(cin, e.pData.address);

	cout << "What is your city? ";
	cin >> e.pData.city;

	cout << "What is your state? ";
	cin >> e.pData.state;

	cout << "What is your zip code? ";
	cin >> e.pData.zip;

	cout << "What is your name? ";
	cin.ignore();
	getline(cin, e.name);

	cout << "What is your employee number? ";
	cin >> e.empNumber;

	cout << "Hello " << e.name << ".\nYou were born " << e.dData.month << e.dData.day << e.dData.year
		<< ".\n You live in " << e.pData.city << e.pData.state << e.pData.address <<
		 ".\n Your zip code is " << e.pData.zip << ".\n Your employee number is " << e.empNumber;
}