#include <iostream>
using namespace std;
int main()
{
	int radius;
	auto const PI = 3.14159;

	cout << "Enter a value for the radius of a circle: ";
	cin >> radius;

	auto area = radius * PI;

	cout << "The area of a circle with the radius " << radius << " is: " << area;
}