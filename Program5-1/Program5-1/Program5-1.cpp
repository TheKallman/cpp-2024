#include <iostream>
using namespace std;
int main()
{
	int num = 0;

	cout << "The variable num has the value: " << num << endl;
	cout << "I will now increment the variable num.\n\n";

	//increment with postfix mdoe
	num++;
	cout << "The variable of num now has the value: " << num << endl;
	cout << "I will increment the variable num again.\n\n";

	//increment using prefix
	++num;
	cout << "The variable of num now has the value: " << num << endl;
	cout << "I will decrement the variable num.\n\n";

	//decrement using postfix
	num--;
	cout << "The variable of num now has the value: " << num << endl;
	cout << "I will decrement the variable num again.\n\n";

	//increment using prefix
	--num;
	cout << "The variable of num now has the value: " << num << endl;
}