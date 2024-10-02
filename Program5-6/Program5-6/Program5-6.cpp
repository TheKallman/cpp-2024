// Program5-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int num = 0;

	cout << "NUMBER\t\tNUMBER SQUARED";
	cout << "\n-------------------------------------\n";

	while (num < 10)
	{
		num++;
		int squared = pow(num, 2);
		
		cout << num << "\t\t" << squared << endl;
	}
}

