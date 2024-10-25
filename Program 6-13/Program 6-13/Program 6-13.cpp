// Program 6-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
double getRadius();
double getSquare(double radius);

int main()
{
    double radius, square, area;
    const double PI = 3.141592653;

    radius = getRadius();

    square = getSquare(radius);

    area = PI * getSquare(radius);
    cout << fixed << showpoint << setprecision(2);
    cout << "The area of a circle with a radius of "
        << radius << " is: " << area;

}


double getRadius()
{
    double radius;
    cout << "Enter the radius of the circle: ";

    cin >> radius;
    return radius;
}

double getSquare(double radius)
{
    double square = pow(radius, 2);

    return square;

}