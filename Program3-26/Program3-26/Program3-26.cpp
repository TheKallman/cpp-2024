#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 6;

	int roll1, roll2;

	unsigned seed = time(0);
	srand(seed);
	
	cout << "Rolling the dice...\n";
	roll1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	roll2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	cout << roll1 << endl << roll2;
}