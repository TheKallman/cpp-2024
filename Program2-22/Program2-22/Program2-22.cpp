#include <iostream>
using namespace std;
int main()
{
	auto monthly = 6000;
	auto fivePercent = 0.05;
	auto sevenPercent = 0.07;
	auto tenPercent = 0.1;

	auto fiveMath = fivePercent * monthly;
	auto sevenMath = sevenPercent * monthly;
	auto tenMath = tenPercent * monthly;

	cout << "Your contribution at 5% is $" << fiveMath << " per month" << endl;
	cout << "Your contribution at 7% is $" << sevenMath << " per month" << endl;
	cout << "Your contribution at 10% is $" << tenMath << " per month" << endl;
}
