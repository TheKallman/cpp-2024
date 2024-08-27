#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int number;
	double dble;
	char character;

	cout << "Enter an integer, a double, and a character separated by a space: ";
	cin >> number >> dble >> character;
	cout << "For the integer value, you entered: " << number << endl;
	cout << "For the double value you entered: " << dble << endl;
	cout << "For the character you entered: " << character << endl;
}