#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

void switchCase(string sentence)
{
	cout << '\n';
	for (char c : sentence)
	{
		if (isupper(c))
		{
			cout << (char)tolower(c);
		}
		else if (islower(c))
		{
			cout << (char)toupper(c);
		}
		else
		{
			cout << c;
		}
	}
	return;
}

void lowerfunction(string sentence)
{
	cout << '\n';
	for (char c : sentence)
	{
		cout << (char)tolower(c);

	}
	return;
}

void upperfunction(string sentence)
{
	cout << '\n';
	for (char c : sentence)
	{
		
		cout << (char)toupper(c);
		
	}
	return;
}
void Exercise1()
{
	//get variable to put the setnecet in
	string sentence;

	//ask user for string
	cout << "Write a single word or sentence.\n";
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	getline(cin, sentence);

	upperfunction(sentence);
	cout << '\n';
	lowerfunction(sentence);
	cout << '\n';
	switchCase(sentence);
	cout << '\n';
	
}