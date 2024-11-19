#include <iostream>
using namespace std;

void showValue(int);

int main()
{
	const int SIZE = 8;
	int numbers[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	for (int index = 0; index < SIZE; index++)
		showValue(numbers[index]);

}

void showValue(int element)
{
	cout << element << " ";
}