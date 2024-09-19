#include <iostream>
#include <string>
using namespace std;
int main()
{
	const double PRICE_A = 249.99, PRICE_B = 199.00;
	string partNum;

	cout << "The headphone part numbers are: \n";
	cout << "Noice Cancelling headphones: part number S-29A\n";
	cout << "Wireless: part number S-29B\n";

	cout << "Enter the part number of the headphones you wish to purchase: ";
	cin >> partNum;

	if (partNum == "S-29A")
	{
		cout << "The price for part number S-29A is $" << PRICE_A;
	}
	else if (partNum == "S-29B")
	{
		cout << "The price for part number S-29B is $" << PRICE_B;
	}
	else
	{
		cout << "That is not a valid input. Please try agian.";
	}

}