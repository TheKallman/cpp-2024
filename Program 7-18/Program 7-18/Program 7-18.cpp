#include <iostream>
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

    total = getTotal(scores, SIZE);

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
    double total = 0;

    for (int index = 0; index < SIZE; index++)
    {
        total += scores[index];
    }
}

double getLowest(int scores[], int SIZE)
{
    
}