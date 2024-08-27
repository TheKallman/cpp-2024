#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int length, area;

	cout << "Enter the length of one side of the square: ";
	cin >> length;

	area = pow(length, 2);

	cout << "The area of a square with a side measurement of " << length << " is: " << area << endl;
}