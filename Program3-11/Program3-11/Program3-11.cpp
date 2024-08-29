#include <iostream>
using namespace std;
int main()
{
	int begInv,
		sold,
		store1, store2, store3;

	cout << "Please input the beginning inventory: " << endl;
	cin >> begInv;
	store1 = begInv;
	store2 = begInv;
	store3 = begInv;

	cout << "How many did store 1 sell? " << endl;
	cin >> sold;
	store1 -= sold;

	cout << "How many did store 2 sell? " << endl;
	cin >> sold;
	store2 -= sold;

	cout << "How many did store 3 sell? " << endl;
	cin >> sold;
	store3 -= sold;

	cout << "Each store's current inventory is:" << endl <<
		"Store 1: " << store1 << endl <<
		"Store 2: " << store2 << endl <<
		"Store 3: " << store3 << endl;

}
