
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;
int main()
{
    int choice = 0;
    while (choice != 5)
    {
        do
        {
            cout << "\nWelcome to my Chapter 5 Exercises.\n";
            cout << "Choose an exercise to run.\n";
            cout << "1. Random Number Guessing Game\n";
            cout << "2. Numeric Processing\n";
            cout << "3. Triangle Patterns\n";
            cout << "4. Web Page\n";
            cout << "5. Average Steps\n";
            cout << "6 Quit\n";
            cout << "Enter your selection: ";
            cin >> choice;
        } while (choice < 1 || choice > 6);

        switch (choice)
        {
        case 1:
        {
            //init named constants
            const int MAX_VALUE = 1000, MIN_VALUE = 1;

            //defnie varialbes
            int randomNum;
            int guess;
            int guessCounter = 0;

            //make "random"
            unsigned seed = time(0);
            srand(seed);

            //make num from 1 to 1000
            randomNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

            //make stuff to get user to guess
            cout << "A number between 1 and 1000 has been chosen.\n"
                << "Guess it and I will tell you if your guess is "
                << "too high or too low\n";

            
            do
            {
                cout << "\n\nGuess: ";
                cin >> guess;
                guessCounter++;

                if (guess > randomNum)
                {
                    cout << "\nToo high, try again.";
                }
                else if (guess < randomNum)
                {
                    cout << "\nToo low, try again.";
                }
            } while (guess != randomNum);
       

            cout << "\nYou have guessed the number: " << randomNum;
            cout << "\nYou guessed the number in " << guessCounter << " attempts." << endl;
            break;
        }
        case 2:
        {
            int text = 0, textCounter = 0, sum = 0, high = 0, low = 9786556789987654;
            double avg = 0;

            ifstream inFile("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\Random.txt");

            //verify file xists
            if (!inFile)
                cout << "File not found";
            else
            {

                //read everything
                while (inFile >> text)
                {
                    textCounter++;
                    sum += text;
                    avg = sum / textCounter;

                    if (text > high)
                    {
                        high = text;
                    }

                    else if (text < low)
                    {
                        low = text;
                    }
                }
                cout << "\nThe number of numbers in the file is: " << textCounter << endl;
                cout << "The sum of all numbers in the file is: " << sum << endl;
                cout << "The average of all the numbers in the file is: " << avg << endl;
                cout << "The highest number in the file is: " << high << endl;
                cout << "The lowest number in the file is: " << low << endl;
            }
            break;
        }
        case 3:
        {
            for (int count = 1; count <= 10; count++)
            {
                cout << string(count, '*') << endl;

            }

            for (int count = 10; count >= 1; count--)
            {
                cout << string(count, '*') << endl;

            }

            break;
        }
        case 4:
        {
            ofstream outFile;
            string name, description, fileName;

            cin.clear();
            cin.ignore(INT_MAX, '\n');

            cout << "\nEnter your name: ";
            getline(cin, name);
            cout << "\nEnter a description about yourself: ";
            getline(cin, description);
            cout << "\nEnter file name: ";
            cin >> fileName;

            outFile.open("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\" + fileName + ".html");

            if (!outFile)
                cout << "File not found.";
            else
            {
                outFile << "<html>\n<head>\n</head>\n<body>\n\t<center>\n\t\t<h1>"
                    << name << "</h1>\n\t</center>\n\t<hr />"
                    << description << "\n\t<ht />\n</body>\n</html>";

                cout << "\nFile Successfully created.";  
            }

            outFile.close();

            break;
        } 
        case 5:
        {
            //open file
            ifstream inFile("C:\\Users\\2012325\\Desktop\\cpp-2024\\datafiles\\steps.txt";

            //init variables
            int janDays = 31, febDays = 28, marDays = 31, aprDays = 30;
            int mayDays = 31, junDays = 30, julDays = 31, augDays = 31;
            int sepDays = 30, octDays = 31, novDays = 30, decDays = 31;

            int janSum = 0, febSum = 0, marSum = 0, aprSum = 0;
            int maySum = 0, junSum = 0, julSum = 0, augSum = 0;
            int sepSum = 0, octSum = 0, novSum = 0, decSum = 0;

            int janAvg, febAvg, marAvg, aprAvg, mayAvg, junAvg, julAvg;
            int augAvg, sepAvg, octAvg, novAvg, decAvg;

            int counter = 0;

            int number;

            //verify file
            if (!inFile)
                cout << "File not found.";
            else
            {
                while (inFile >> number)
                {
                    counter++;

                    while (counter <= 31)
                        janSum += number;

                    while (counter > 31 && counter <= 59)
                        febSum += number;

                }
            }
            break;
        }
        case 6:
        {
            cout << "Bye bye bye bey bey eyb bey bey.........";
        }
            
        }
    }
}
