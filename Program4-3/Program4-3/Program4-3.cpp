#include <iostream>
using namespace std;
int main()
{
    double a = 1.5, b = 1.5; // change double to other things likke float and long double blah blah

    a += 0.000000000000000001;
    if (a == b)
        cout << "Both a and b are the same!\n";
    else
        cout << "a and b are not the same!\n";
}