#include <iostream>
using namespace std;
int main()
{
	int number = 12345;
	int rightMost = number % 10;

	cout << "The right-most number of " << number << " is " << rightMost << endl;
}