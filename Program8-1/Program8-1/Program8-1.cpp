#include <iostream>
using namespace std;

int linearSearch(int[5], int, int);

int main()
{
    int const testNum = 5;
    int results;
    int TESTS[testNum] = { 87, 75, 98, 100, 82 };
    results = linearSearch(TESTS, testNum, 100);

    if (results == -1)
    {
        cout << "You did not score a 100 on any tests.\n";
    }
    else
    {
        cout << "You earned a 100 on a test!\n";
        cout << "It was test number " << (results + 1) << ".\n";
    }
}

int linearSearch(int TESTS[5], int testNum, int searchVal)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < testNum && !found)
    {
        if (TESTS[index] == searchVal)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}