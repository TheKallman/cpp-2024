#include <iostream>
using namespace std;
int main()
{
	try
	{
		double x = 0;
		// try block
		// get input from the user
		cout << "Enter a value: ";
		cin >> x;

		if (x == 0)
		{
			// throw a runtime error if a divide by zero would occur
			throw runtime_error("Division by zero error");
		}
		else
		{
			double y = 10 / x;
			cout << 10 << " / " << x << " = " << y << endl;
		}
	}
	catch (const logic_error& e)
	{
		// catch block for any logic error
		cerr << "Logic exception caught: " << e.what() << endl;
	}
	catch (const runtime_error& e)
	{
		// catch block for any standard exception
		cerr << "Standard exception caught: " << e.what() << endl;
	}
	catch (...)
	{
		// catch block for any exceptions
		cerr << "Unkown exception caught!" << endl;
	}
}
