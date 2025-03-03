#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	// initializing variables and size
	double a, b, n = 10;

	string message = "Will you be the watergirl to my fireboy";

	int print_message = 4;

	if (message.length() % 2 != 0)
		message += " ";

	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= 4 * n; b++)
		{
			double distance1 = sqrt(pow(a - n, 2) + pow(b - n, 2));
			double distance2 = sqrt(pow(a - n, 2) + pow(b - 3 * n, 2));

			if (distance1 < n + 0.5 || distance2 < n + 0.5)
				cout << "S";

			else
				cout << " ";
		}
		cout << "\n";
	}
	for (a = 1; a < 2 * n; a++)
	{
		for (b = 0; b < a; b++)
			cout << " ";
		
		for (b = 0; b < 4 * n + 1 - 2 * a; b++)
		{
			if (a >= print_message - 1 && a <= print_message + 1)
			{
				int point = b - (4 * n - 2 * a - message.size()) / 2;

				if (point < message.size() && point >= 0)
				{
					if (a == print_message)
						cout << message[point];
					else
						cout << " ";
				}
				else
					cout << "S";
			}
			else cout << "S";
		}
		cout << endl;
	}
}