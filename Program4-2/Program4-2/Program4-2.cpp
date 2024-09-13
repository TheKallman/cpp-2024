#include <iostream>
using namespace std;
int main()
{
	// initzleir valirables

	int const HIGH_SCORE = 95;
	float score1, score2, score3;

	// calcumalate average cuh
	cout << "Enter three test scores, separated by a space, and I will average them: ";
	cin >> score1 >> score2 >> score3;
	cout << endl;

	float average = (score1 + score2 + score3) / 3;

	cout << "Your average is " << average;

	if (average > HIGH_SCORE)
		cout << "\nCongratulations! That's a new high score!";
}
