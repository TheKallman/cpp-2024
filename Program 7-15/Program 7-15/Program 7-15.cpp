#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    int const employees = 5;
    int hours[employees];
    double payRate[employees];

    cout << "Enter the hours worked by " << employees << " employees and their hourly pay rate.\n";

    for (int index = 0; index < employees; index++)
    {
        cout << "\nHours worked by employee #" << (index + 1) << ": ";
        cin >> hours[employees];

        cout << "Pay rate for employee #" << (index + 1) << ": ";
        cin >> payRate[employees];
    }

    cout << "\nHere is the gross pay for each employee.\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < employees; index++)
    {
        double grossPay = hours[index] * payRate[index];

        cout << "Employee #" << (index + 1) << ":\t" << grossPay << endl;
    }
}