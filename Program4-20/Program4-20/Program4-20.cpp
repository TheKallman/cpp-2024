#include <iostream>
using namespace std;
int main()
{
	char ch;

	cout << "Please enter a charater: ";
	cin >> ch;

	if (ch >= '0' && ch <= '9')
		cout << "You entered a digit.\n";
	if (ch >= 'A' && ch <= 'Z')
		cout << "You entered an upper case character.\n";
	if (ch >= 'a' && ch <= 'z')
		cout << "You entered a lower case character.\n";
	else
		cout << "You entered a character other than a digit, "
		<< "upper case, or lower case character.";
}