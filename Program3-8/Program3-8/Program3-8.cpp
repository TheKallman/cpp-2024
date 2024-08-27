#include <iostream>
using namespace std;
int main()
{
	float test;

	test = 2.0e38 * 1000;
	cout << "2.0e38 * 1000 results in the following overflow: " << test << endl;

	test = 2.0e-38 / 2.0e38;
	cout << "2.0e-38 / 2.0e38 results in the following underflow: " << test << endl;

}