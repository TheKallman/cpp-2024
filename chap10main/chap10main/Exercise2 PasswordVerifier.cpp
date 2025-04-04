#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

void Exercise2()
{
	//initalzize password for theuser to tpyei in
	string password;

	cout << "Enter your password.\nIt must be at least 9 characters long." <<
		"\nIt must have at least one of the following." <<
		"\nAn uppercase character.\nA lowercase character.\nA digit.\n";

	//type in password
	cout << "\nEnter your password: ";
	cin.ignore();
	getline(cin, password);

	//check to make sure the password meets the requirements
	//get bools for checking
	bool hasLength = true;
	bool hasUpper = false;
	bool hasLower = false;
	bool hasDigit = false;

	if (password.length() < 9)
	{
		hasLength = false;
		cout << "Your password has inadequate length.\n";
	}
	for (char c : password)
	{
		
		if (islower(c))
		{
			hasLower = true;
		}
		if (isupper(c))
		{
			hasUpper = true;
		}
		if (isdigit(c))
		{
			hasDigit = true;
		}
	}

	if (hasLower == false)
	{
		cout << "Your password does not have a lowercase letter.\n";
	}
	if (hasUpper == false)
	{
		cout << "Your password does not have an uppercase letter.\n";
	}
	if (hasDigit == false)
	{
		cout << "Your password does not have a digit.\n";
	}
	if (hasLower == true && hasUpper == true && hasDigit == true && hasLength == true)
	{
		cout << "Your password meets the requirements.\n";
	}


}