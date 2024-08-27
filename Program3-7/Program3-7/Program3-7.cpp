#include <iostream>
using namespace std;
int main()
{
	short testVar = 32767;

	cout << "Maximum short integer value: " << testVar << endl;

	testVar = testVar + 1;
	cout << "Add 1 to make testVar overflow: " << testVar << endl;

	testVar = testVar - 1;
	cout << "Subtract 1 to make testVar underflow back to its original value: " << testVar << endl;
}
