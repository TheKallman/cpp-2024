#include <iostream>
using namespace std;
int main()
{
	double regularWages,
		basePayRate = 18.5,
		regularHours = 40,
		overtimeWages = basePayRate * regularHours,
		overtimePayRate = 27.78,
		overtimeHours = 10,
		totalWages = overtimePayRate * overtimeHours,
		totaltotalWages = totalWages + overtimeWages;
		
	cout << "Your wages for this week are: $" << totaltotalWages;
}