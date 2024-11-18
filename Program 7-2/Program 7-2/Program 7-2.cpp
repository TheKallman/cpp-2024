#include <iostream>
using namespace std;
int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES], count;

    for (count = 0; count < NUM_EMPLOYEES; count++)
    {

        // take input from the user for hours worked
        cout << "Enter the hours worked by employee "
            << count + 1 << ": ";

        // Add the hours to the array
        cin >> hours[count];
    }

    cout << "Here are the hours you entered: ";
    //loop to output the array
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << " " << hours[count];
    }
    cout << endl;
    return 0;
}