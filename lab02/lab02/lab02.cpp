// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: lab02.cpp
// Date: 9/4/2015
// Contents: lab02
// I delcare that the following source code was written
// solely by me, or provided by the instructor.
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------------

#include <iostream>
#include <vector>
using namespace std;

const int arraySize = 5;

//Function to add the elements of an array
double sumElements(double numToSum[])
{
	double sumOfNumbers = 0;

	for (int x = 0; x < arraySize; x++)
	{
		sumOfNumbers += numToSum[x];
		//cout << sumOfNumbers << endl;

	}

	return sumOfNumbers;
}


int main()
{
	//declare a vector of doubles
	vector <double> myVector;

	//declare an array of size "arraySize"
	double myArray[arraySize];

	int counter = 1;
	int decimalPlaces = 2;
	double userNumber;
	double total;



	//Ask for user to input 5 numbers of decimal value
	cout << "Please enter a decimal value.\n";

	do
	{
		cout << ">>";
		cin >> userNumber;

		//check for invalid response from user
		if (cin.fail())
		{
			cout << "\nInvalid response please enter a decimal value.\n";

			cin.clear();
			cin.ignore(80, '\n');
		}
		//add number to vector
		else
		{
			myVector.push_back(userNumber);
			counter++;

			cout << "\nPlease enter another decimal value.\n";
		}



	} while (counter <= arraySize);

	//transfer data from vector to array
	for (int x = 0; x < arraySize; x++)
	{
		myArray[x] = myVector[x];
	}

	//call sumElements Function which will add the values in the array
	total = sumElements(myArray);

	//set decimal places to 2
	cout << fixed;
	cout.precision(decimalPlaces);

	//Print the total after all numbers have been added together
	cout << "The total is " << total << endl;

	system("Pause");

	return 0;

}