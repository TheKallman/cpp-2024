#include <iostream>
using namespace std;
int main()
{
	int changed;

	cout << "Enter an integer value to see the char conversion: ";
	cin >> changed;

	cout << "The integer " << changed << " converted to a char is: " << static_cast<char>(changed) << endl;
}