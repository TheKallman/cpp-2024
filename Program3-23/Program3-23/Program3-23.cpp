#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch;
	int number;
	string firstName, lastName, fullName;

	cout << "Enter a number: ";
	cin >> number;
	cin.ignore();
	cout << "Enter a character: ";
	ch = cin.get();
	cout << "Enter your last name: ";
	cin.ignore();
	getline(cin, firstName);
	cout << "Enter your last name: ";
	getline(cin, lastName);
	fullName = firstName + " " + lastName;
	cout << "Hello " << firstName + " " + lastName << ".\n";
	cout << "\nYou entered the number " << number << " and the letter "
		<< ch << "\nThank you " << fullName << "!\n";
}