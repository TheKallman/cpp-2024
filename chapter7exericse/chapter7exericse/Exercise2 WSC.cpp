#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

void Exercise2()
{
	//opnn files
	ifstream Teams;
	Teams.open("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\Teams.txt");

	ifstream Winners;
	Winners.open("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\WorldSeriesWinners.txt");
	
	//initalizedt he vectors and what not
	map<string, int> points = {};
	vector<string> names = {};

	string currentName;

	cout << "\n";

	if (!Teams) // make sure file exists
		cout << "File not found.";
	else // file exists, continue
	{
		//put the current name (name next on list) into the names vector
		while (getline(Teams, currentName))
		{
			names.push_back(currentName);
			points[currentName] = 0;
		}
		
		//read the world series winners text file and
		//count how many times each name was listed
		while (getline(Winners, currentName))
		{
			points[currentName]++;
		}

		///// close files
		Teams.close();
		Winners.close();

		cout << "The following teams have won the world series at least once:\n\n";

		//format the teams to look pretty
		int nameCount = 1;
		for (string name : names)
		{
			cout << left << setw(25) << name;

			//every 3 team names go to next line
			if ((nameCount % 3) == 0)
			{
				cout << '\n';
			}

			nameCount++;
		}

		string chosenName;

		//get team name chosen by user
		cout << "\n\nEnter the name of one of the teams: ";
		getline(cin, chosenName);

		//make sure user putsin correct name
		bool valid = false;
		do
		{
			getline(cin, chosenName);
			if (cin.fail() || !points[chosenName])
			{
				cin.clear();
				cout << "\nEnter the name of one of the teams: ";
			}
			else
			{
				valid = true;
			}
		} while (!valid);

		//output how manby times the team has won
		cout << "\nThe " << chosenName << " have won the World Series " <<
			points[chosenName] << " time(s) betwen 1903 and 2012.\n";
	} 
}