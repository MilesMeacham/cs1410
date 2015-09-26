// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: lab04.cpp
// Date: 9/12/2015
// Contents: lab04 - File I/O

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------


#include <iostream>
#include <fstream>
#include <array>

using namespace std;

const int MAX_ARRAY_SIZE = 100;

int main()
{
	//declaring variables
	double voltages[MAX_ARRAY_SIZE];
	int fileSize = 0;
	double sum = 0;
	double myData;

	//declare stream object
	ifstream myFile;

	//file is in same as .exe
	//open the file
	myFile.open("voltages.txt");

	//check to see if file.open failed
	if (myFile.fail())
	{
		cout << "Could not open the file.\n";
		system("Pause");
		return 0;
	}

	//continue if the file opened
	
	//initialize counter for do loop to 0
	int i = 0;

	//This will put the contents of the file into the array
	//It also increments fileSize to determine how man numbers are added to the array
	do
	{
		myFile >> myData;
		if (i < MAX_ARRAY_SIZE)
		{
			if (myFile.good())
			{
				voltages[i] = myData;
				cout << voltages[i] << endl;
				fileSize++;
			}
			//check each time to see if it failed
			else if (!myFile.eof())
			{
				cout << ("\nEncountered an error while trying to read the file\n");
				system("Pause");
				return 0;
			}
		}

		i++;

	} while (!myFile.eof());

	//adds up the sum of the voltages array
	for (int x = 0; x < fileSize; x++)
	{
		sum += voltages[x];
	}

	//print out the average by taking the sum and dividing it by the file size
	cout << "\nThe average voltage value is " << sum / 5 << endl;


	system("Pause");
	return 0;
}