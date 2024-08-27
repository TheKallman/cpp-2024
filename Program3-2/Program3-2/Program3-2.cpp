#include <iostream>
using namespace std;
int main()
{
	int length, width, area;

	cout << "Enter values for length and width, separated by a space: ";
	cin >> length >> width;

	area = length * width;
	cout << "The area of a rectangle with a length of " << length << " and a width of " << width << " is " << area << endl;
}