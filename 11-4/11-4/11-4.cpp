#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct PayInfo
{
    string name;
    int hours;
    double payRate;
    string days[3];
};

int main()
{
    const int NUM_WORKERS = 3;
    PayInfo workers[NUM_WORKERS];
    int index;
    double gross;

    cout << "Enter the hours worked by " << NUM_WORKERS << " employees " <<
        "and their hourly rates.\nPRESS ENTER TO CONTINUE...\n";

    for (index = 0; index < NUM_WORKERS; index++)
    {
        cin.ignore();

        cout << "Enter the employee name: ";
        getline(cin, workers[index].name);

        cout << "Enter the hours worked for employee " << workers[index].name <<
            ": ";
        cin >> workers[index].hours;

        cout << "Enter the payrate for employee " << workers[index].name <<
            ": ";
        cin >> workers[index].payRate;
        cout << endl;

        for (int i = 0; i < 3; i++);
        {
            cout << "Day " << (i + 1) << ": ";
            cin >> workers[index].days[i];
        }
    }

    cout << "Here is the gross pay for each employee:\n";
    cout << showpoint << fixed << setprecision(2);

    for (index = 0; index < NUM_WORKERS; index++)
    {
        gross = workers[index].hours * workers[index].payRate;
        cout << "Employee " << workers[index].name;
        cout << ": $" << gross << endl;

        for (int j = 0; j < 3; j++)
        {
            cout << "Day " << (j + 1) << ": " << workers[index].days[j] << endl;
        }
    }
    return 0;
}