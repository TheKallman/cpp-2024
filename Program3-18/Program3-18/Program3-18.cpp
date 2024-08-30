#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string name, city;

	cout << "Enter your first and last name: ";
	getline(cin, name);
	cout << "Enter the city you live in: ";
	getline(cin, city);

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
}