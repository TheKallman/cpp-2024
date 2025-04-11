#include "Rectangle.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//######################################
// setWidth assigns a value to the width member
// #################################################################
void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		cout << "Error: Invalid width!";
		exit(EXIT_FAILURE);
	}
}	

//#########################################
// setLength assigns a value to thelenght menmber
//#########################################################################
void Rectangle::setLength(double l)
{
	if (l >= 0)
		length = l;
	else
	{
		cout << "Error: Invalid length!";
		exit(EXIT_FAILURE);
	}
}
//#########################################
// getWitdtth returns the value n the width menmber
//#########################################################################
double Rectangle::getWidth() const { return width; }

//#########################################
// sgetLength returns the value of the length member
//#########################################################################
double Rectangle::getLength() const { return length; }
//#########################################
// getARea returns the product of width times length
//#########################################################################
double Rectangle::getArea() const { return length * width; }