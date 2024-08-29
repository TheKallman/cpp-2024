#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int intValue = 3928;
	double doubleValue = 91.5;
	string stringValue = "Price Humperdink";
	
	cout << "(" << setw(16) << intValue << ")" << endl;
	cout << "(" << setw(16) << doubleValue << ")" << endl;
	cout << "(" << setw(16) << stringValue << ")" << endl;
}