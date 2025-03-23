#include <iostream>

using namespace std;

double average(int* array, int tests)
{
    int sum = 0;

    for (int m = 1; m < tests; m++)
    {
        sum += array[m];
    }

    double average = sum / (tests - 1);
    return average;
}
void SWAP(int* array, int i, int j)
{
    int newvariable = array[i];
    array[i] = array[j];
    array[j] = newvariable;
}

int PARTITION(int* array, int low, int high)
{
    int pivot = array[high];  // Choose last element as pivot
    int i = low - 1;  // Pointer for smaller element

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            SWAP(array, i, j);
        }
    }
    SWAP(array, i + 1, high);  // Move pivot to correct position
    return i + 1;  // Return pivot indexRETURN i + 1  // Return pivot index
}


void sorter(int* arrray, int low, int high)
{
    if (low < high)
    {
        int pivot_index = PARTITION(arrray, low, high);

        sorter(arrray, low, pivot_index - 1);  // Sort left part
        sorter(arrray, pivot_index + 1, high); // Sort right part
    }

}

int* notmainfunction(int tests)
{
    int* aray = new int[tests];
    return aray;
}

int main()
{
    int score = 0;

    int tests = 0;
    cout << "How many tests do you want? ";
    cin >> tests;
    
    int* arrray = notmainfunction(tests);
    cout << "Enter in the scores of the tests.\n";

    for (int i = 0; i < tests; i++)
    {
        
        cin >> score;
        if (score < 0)
        {
            cout << "Do not put negative numbers.\n";
            i--;
        }
        else
        {
            arrray[i] = score;
        }
    }

    int low = 0;
    int high = tests;

    sorter(arrray, low, high - 1);

    for (int n = 0; n < tests; n++)
    {
        cout << arrray[n] << " ";
    }

    double arrayAverage = average(arrray, tests);
    cout << "\nThe average of the array with the lowest number dropped is: " << arrayAverage;
}


