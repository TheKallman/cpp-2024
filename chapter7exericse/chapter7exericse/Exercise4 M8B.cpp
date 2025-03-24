#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <map>
#include <ctime>
using namespace std;

void Exercise4()
{
    unsigned seed = time(0);
    srand(seed);
    //open file
    ifstream responses;
    responses.open("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\8_ball_responses.txt");


    //make vector thats me
    //committing crimes with both direction and magnitude
    // oh yeah
    vector<string> response = {};

    string currentResponse;

    cout << '\n';

    //read file and put responses in the response vector
    while (getline(responses, currentResponse))
    {
        response.push_back(currentResponse);
    }

    //make variable to loop through and ask multiple questions until set to "n"
    string again = "y";
    string question;

    while ((again == "y") || (again == "Y"))
    {
        //ask a question
        cout << "Ask a question for the mysterious and all-knowing Magic 7 Ball to answer.\n>> ";
        
        cin.ignore(INT_MAX, '\n');
        getline(cin, question);
        
        //make a random number to input as the index to create a random response
        //the - 1 and + 1 at the end might need to be changed to 0
        int ranIndex = (rand() % (response.size() - 0 + 1)) + 0;

        cout << response[ranIndex];
        
        cout << "\nWould you like to ask another question? (y/n)\n";
        
        
        cin.clear();

        cin >> again;
        
    }
    cout << "\nGoodbye.";
}