#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{


	int roll1, roll2;
	unsigned apple = time(0);
	srand(apple);
	roll1 = (rand() % (6 - 1 + 1)) + 1;
	roll2 = (rand() % (6 - 1 + 1)) + 1;
	cout << roll1 << endl << roll2;
}