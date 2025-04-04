#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void Exercise3()
{
	string story;
	int lowerCount = 0;
	int upperCount = 0;
	int digitCount = 0;
	int sentenceCount = 0;
	ifstream inFile("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\text.txt");

	if (!inFile)
		cout << "File not found";
	else
	{
		while (getline(inFile, story))
		{
			sentenceCount++;
			for (char c : story)
			{
				if (islower(c))
				{
					lowerCount++;
				}
				if (isupper(c))
				{
					upperCount++;
				}
				if (isdigit(c))
				{
					digitCount++;
				}
			}
		}

		cout << "The story has " << lowerCount << " lowercase letters.\n";
		cout << "The story has " << upperCount << " uppercase letters.\n";
		cout << "The story has " << digitCount << " digits.\n";
		cout << "The story has " << sentenceCount << " sentences.\n";
	}
}