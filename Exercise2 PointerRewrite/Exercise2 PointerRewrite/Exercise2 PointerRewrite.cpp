#include <iostream>
using namespace std;

int doSomething(int* x, int* y)
{
	int* temp = x;
	*x = *y * 10;
	*y = *temp * 10;
	return *x + *y;
}

int main()
{
	int excelsior = 10;
	int* x = &excelsior;

	int yam = 3;
	int* y = &yam;

	
	cout << "x = " << * x << " y = " << *y << endl;

	doSomething(x, y);

	cout << "x = " << *x << " y = " << *y << endl;
}


