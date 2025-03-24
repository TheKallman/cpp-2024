#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	const int SIZE = 80;
	char line[SIZE];
	int count = 0;

	cout << "Enter a sentence, no longer than 79 characters.\n> ";
	cin.getline(line, SIZE);

	while (line[count] != '\0')
	{
		cout << line[count];
		count++;
	}
	cout << endl;
}

