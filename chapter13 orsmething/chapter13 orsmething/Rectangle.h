#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
	double width;
	double length;

public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
	~Rectangle()
	{
		cout << "\nObject destroyed\n";
	}
};

#endif