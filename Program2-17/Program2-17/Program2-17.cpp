#include <iostream>
using namespace std;
int main()
{
	bool boolValue = true;

	cout << "The current state of boolValue is: " << boolValue << endl;
	boolValue = false;
	cout << "The current state of boolValue is now: " << boolValue << endl;

	double amount;
	cout << "A double is stored in " << sizeof(double) << "bytes\n";
	cout << "Variable amount is stored  in " << sizeof(amount) << "bytes\n";
}