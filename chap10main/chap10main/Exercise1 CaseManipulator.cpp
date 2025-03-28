#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

vector<string> upperfunction(string sentence)
{
	//counter to get the size of the sentence
	int counter = 0;

	//initialezre vector to add the uppercase'd letters to it
	vector<string> sentenceVector;
	for (char c : sentence)
	{
		cout << c << " ";
		cout << endl << toupper(c);
		sentenceVector[counter] = c;
		counter++;

		//for (int i = 0; i < counter; i++)
	}
	return sentenceVector;
}
void Exercise1()
{
	//get variable to put the setnecet in
	string sentence;

	//ask user for string
	cout << "Write a single word or sentence.\n";
	cin >> sentence;

	vector<string> sentenceVector = upperfunction(sentence);
}