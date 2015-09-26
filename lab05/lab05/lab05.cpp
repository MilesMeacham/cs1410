// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: lab05.cpp
// Date: 9/25/2015
// Contents: lab05 - Try Catch

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------


#include <iostream>
#include <cmath>
#include <string>

using namespace std;


//The calculateSquare Function
//Purpose: Squares a number. Throws an exception if the number is 0 or negative.
//Parameter: int (the userInput number to be squared)
//Return: int (the squared number)
int calculateSquare(int toBeSquared)
{
	//declaring variables for calculateSquare function
	int square = 0;
	string error;

	//try catch to see if the number is 0 or negative.
	try {
		if (toBeSquared == 0)
		{
			error = "zero";
			throw 0;
		}
		else if (toBeSquared < 0) {
			error = "a negative number";
			throw 1;
		}
	}
	catch (int e)
	{
		cout << "Error: You entered " << toBeSquared << "." << endl;
		cout << "This function cannot divide by " << error << "." << endl;
	}

	//if number passes the try catch it will get squared here
	square = pow(toBeSquared, 2);

	//return the squared number
	return square;

}

int main()
{	
	//declaring variables
	int userInput;
	int squaredNumber;

	//prompt user to enter a positive, non-zero number and set the input to 'userInput'
	cout << "Please enter a positive, non-zero number.\n";
	cin >> userInput;
	cout << endl;

	//call the calculateSquare function using 'userInput'
	//squaredNumber will equal the return value
	squaredNumber = calculateSquare(userInput);

	//if the function returned a positive number, print it
	if (squaredNumber > 0) {
		cout << "The square root of " << userInput << " is " << squaredNumber << "." << endl;
	}

	system("Pause");

	return 0;

}

