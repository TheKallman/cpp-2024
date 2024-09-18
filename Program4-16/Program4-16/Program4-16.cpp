#include <iostream>
using namespace std;
int main()
{
	int const MIN_INCOME = 35000;
	int const MIN_YEARS = 5;

	int askIncome, askYears;

	//ask if user gyat the stuff
	cout << "What is the income u gyat? ";
	cin >> askIncome;

	cout << "What is employment amount? ";
	cin >> askYears;

	if (askIncome >= MIN_INCOME || askYears >= MIN_YEARS)
	{
		cout << "Congrats\n";
		cout << "You qualify for the loan.\n";
	}
	else
	{
		cout << "Bozo you dont quality";
	}
}