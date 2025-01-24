#include <iostream>
using namespace std;

int binarySearch(const int[], int, int);

int main()
{
	// declare variables
	const int SIZE = 20;
	int idNums[SIZE] = { 101, 142, 147, 189, 199, 207, 222,
						 234, 289, 296, 310, 319, 388, 394,
						 417, 429, 447, 521, 536, 600 };
	int results;
	int stuID;

	// prompt the user for the student ID
	cout << "Enter the student ID to search for: ";
	cin >> stuID;

	// pass the array, size, and search criteria to binarySearch
	results = binarySearch(idNums, SIZE, stuID);

	// output the results
	if (results == -1)
		cout << " The Student ID " << stuID << " was not found.";
	else
	{
		cout << "That Student ID was found at index " << results << endl;
	}
}

int binarySearch(const int arr[], int size, int value)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;

	// loop through the array
	while (!found && first <= last)
	{
		middle = (first + last) / 2; // find midpoint
		if (arr[middle] == value) // value is at imd
		{
			found = true;
			position = middle;
		}
		else if (arr[middle] > value) // if value is in the lower half
			last = middle - 1;
		else // if value is in the upper half
			first = middle + 1;
	}
	return position;
}