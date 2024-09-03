#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a, b;

	cout << "Enter the length of side a: ";
	cin >> a;
	cout << "Enter the length of side b: ";
	cin >> b;

	double hypotenuse = sqrt(pow(a, 2) + pow(b, 2));

	cout << "The length of the hypotenuse is: " << hypotenuse << endl;
}