#include <iostream>
using namespace std;
int main()
{
	//Initailzer valariables
	bool trueValue, falseValue;
	int x = 5, y = 10;

	//Assign true/false values
	trueValue = x < y;
	falseValue = y == x;

	cout << "True is: " << trueValue << endl;
	cout << "False is: " << falseValue << endl;
}
