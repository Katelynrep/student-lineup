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
        cout << "Error: Could not open file" << endl;
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
