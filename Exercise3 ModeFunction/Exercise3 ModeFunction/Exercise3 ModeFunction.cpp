#include <iostream>
#include <algorithm>

using namespace std;


int* notmainfunction(int size)
{
    int* numbers = new int[size]();
    return numbers;
}

int mode(int* array, int size)
{
    int* highest = max_element(array, array + size);
    int* fakeMap = notmainfunction(*highest + 1);

    for (int i = 0; i < size; i++)
    {
        int index = array[i];
        fakeMap[index]++;
    }

    int modeContender = 0;
    int modeIndex = 0;

    for (int p = 0; p < *highest + 1; p++)
    {
        if (fakeMap[p] > modeContender)
        {
            modeContender = fakeMap[p];
            modeIndex = p;
        }
    }

    if (modeContender < 2)
    {
        return -1;
    }
    return modeIndex;
}

int main()
{
    const int size = 5;
    
    int number = 0;

    int* numbers = notmainfunction(size);
    cout << "Enter in 5 numbers.\n";

    for (int i = 0; i < size; i++)
    {

        cin >> number;
        if (number < 0)
        {
            cout << "Do not put negative numbers.\n";
            i--;
        }
        else
        {
            numbers[i] = number;
        }
    }

    int arrayMode = mode(numbers, size);
    cout << "The mode of the array is " << arrayMode;
}

