#include <iostream>
using namespace std;
int main()
{
	auto totalSeconds = 125;
	auto findMinutes = totalSeconds / 60;
	auto findSeconds = totalSeconds % 60;

	cout << "In " << totalSeconds << " seconds there are:" << endl;
	cout << "Minutes: " << findMinutes << endl;
	cout << "Seconds: " << findSeconds << endl;
}