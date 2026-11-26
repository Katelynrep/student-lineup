#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    ifstream inputFile;
    string currentName;
    string firstName;
    string lastName;
    int studentCount = 0;


    inputFile.open("LineUp.txt");


    if (!inputFile)
    {
        cout << "Error: Could not open LineUp.txt" << endl;
        return 1;
    }

    while (inputFile >> currentName)
    {
        studentCount++;

        if (studentCount == 1)
        {
            firstName = currentName;
            lastName = currentName;
        }
        else
        {
            if (currentName < firstName)
            {
                firstName = currentName;
            }

            if (currentName > lastName)
            {
                lastName = currentName;
            }
        }
    }

    // Display the results
    cout << "Student Lineup Results" << endl;
    cout << "----------------------" << endl;

    cout << "Number of students: " << studentCount << endl;

    if (studentCount > 0)
    {
        cout << "First alphabetically: "
             << firstName << endl;

        cout << "Last alphabetically: "
             << lastName << endl;
    }
    else
    {
        cout << "No student names were found." << endl;
    }


    inputFile.close();

    return 0;
}
