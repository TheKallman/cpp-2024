#include <iostream>
using namespace std;
int main()
{
	int number;

	cout << "Enter an integer and I will tell you if it is even or odd.\n";
	cin >> number;

	if (number % 2 == 0)
		cout << number << " is an even number.";
	else
		cout << number << " is an odd number.";
}