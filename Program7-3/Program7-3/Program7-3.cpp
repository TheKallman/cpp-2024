#include <iostream>
using namespace std;
int main()
{
  
	const int MONTHS = 12;
	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int count = 0; count < MONTHS; count++)
	{
		cout << "Month " << (count + 1) << " has "
			<< days[count] << " days.\n";
	}
}