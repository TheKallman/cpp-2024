#include <iostream>
using namespace std;
int main()
{
	char feedGrade;

	cout << "Our pet food comes in threww grades: A, B, and C\n"
		<< "Which grade would you like to see pricing for?\n";
	cin >> feedGrade;

	switch (feedGrade)
	{
	case 'a':
	case 'A':
		cout << "30 cents per pound.\n";
		break;
	case 'b':
	case 'B':
		cout << "20 cents per pound.\n";
		break;
	case 'c':
	case 'C':
		cout << "10 cents per pound.\n";
		break;
	default:
		cout << "Invalid choice.";
	}
}