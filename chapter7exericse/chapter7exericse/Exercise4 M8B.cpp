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

}