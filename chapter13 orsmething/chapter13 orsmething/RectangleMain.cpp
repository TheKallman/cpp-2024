#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle box; // defining an instance (instantiating) of the rectagnel class
	double rectWidth, rectLength;

	// prompt the user for width and lenjgth
	cout << "Enter the width of the rectangle: ";
	cin >> rectWidth;
	cout << "Enter the length of the retagnel: ";
	cin >> rectLength;

	// store widtha nd length as attributes in the box object of the rectangle class
	box.setWidth(rectWidth);
	box.setLength(rectLength);

	// display the rectang;;e's data
	cout << "Here are the dimensions for your recantlge:\n";
	cout << "Width: " << box.getWidth() << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Area: " << box.getArea() << endl;
	return 0;
}