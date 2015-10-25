// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Exception.h
// Date: 9/27/2015
// Contents: project03 The header file for the "Exception" class

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Exception
{
private:
	string errorMessage;
	int errorNum;

public:

	//Default Constructor
	//Purpose: Clear Error Message
	//Parameter: void
	//Return: None
	Exception();

	//Parameterized Constructor
	//Purpose: set the num and the message of the error
	//Parameter: void
	//Return: None
	Exception(int num, string message);

	//The getErrorMessage Function
	//Purpose: Returns the Message
	//Parameter: none
	//Return: string (errorMessage)
	string getErrorMessage();

	//The getErrorNum Function
	//Purpose: Returns the error number
	//Parameter: none
	//Return: int (errorNum)
	int getErrorNum();
};

