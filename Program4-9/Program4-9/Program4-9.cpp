#include <iostream>
using namespace std;
int main()
{
	float num1, num2;

	cout << "Enter a number: ";
	cin >> num1;
	
	cout << "Enter another number: ";
	cin >> num2;

	if (num2 == 0)
	{
		cout << "\nERROR: Cannot divide by 0!";
		cout << "Please try again";
	}
	else
	{
		float formula = num1 / num2;
		cout << endl << num1 << "/" << num2 << "=" << formula;
	}
		

}
