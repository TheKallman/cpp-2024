#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

int Exercise4()
{
    //open file
    ifstream responses;
    responses.open("C:\\Users\\2012325\\Desktop\\cpp - 2024\\datafiles\\8_ball_responses.txt");


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

    bool again = true;
    string question;

    while (again == true)
    {
        cout << "Ask a question for the mysterious and all-knowing Magic 7 Ball to answer.\n>> ";
        cin >> question;

        //random stuff in chapter 3 slide 79
    }

}