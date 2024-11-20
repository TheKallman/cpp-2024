#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int[], int);
double getTotal(int[], int);
double getLowest(int[], int);

int main()
{
    int const SIZE = 4;
    int scores[SIZE];
    int total, lowest, average;

    getScore(scores, SIZE);

    lowest = getLowest(scores, SIZE);


    total = getTotal(scores, SIZE);

    average = total / (SIZE - 1);
    cout << fixed << showpoint << setprecision(2);
    cout << "The average of the scores ";
    for (int index = 0; index < SIZE; index++)
    {
        cout << scores[index] << " ";
    }
    cout << "with the lowest score of " << lowest
        << " dropped is: " << average << endl;
}

void getScore(int scores[], int SIZE)
{
    for (int index = 0; index < SIZE; index++)
    {
        cout << "Enter the score for test " << (index + 1) << ": ";
        cin >> scores[index];
    }
}

double getTotal(int scores[], int SIZE)
{
    double total = 0.0;

    for (int index = 0; index < SIZE; index++)
    {
        total += scores[index];
    }
    return total;
}

double getLowest(int scores[], int SIZE)
{
    double lowest = 101;

    for (int index = 0; index < SIZE; index++)
    {
        if (scores[index] < lowest)
            lowest = scores[index];
    }
    return lowest;
}