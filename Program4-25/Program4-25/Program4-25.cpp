#include <iostream>
#include <string>
using namespace std;
int main()
{
	int model;

	cout << "Our TVs come in three models: The 100, 200, and 300.\n";
	cout << "Which model do you want to see features for? \n> ";
	cin >> model;

	switch (model)
	{
	case 300:
		cout << "Picture-in-a-Picture" << endl;
	case 200:
		cout << "Stereo Sound" << endl;
	case 100:
		cout << "Remote Control" << endl;
	default:
		break;
	}
}