// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Person.cpp
// Date: 9/27/2015
// Contents: project03 The cpp file for the "Person" class

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------

#include "Exception.h"
#include <string>



Exception::Exception()
{
	errorMessage = "";
	errorNum = 0;
}


Exception::Exception(int num, string message)
{
	errorMessage = message;
	errorNum = num;
}

string Exception::getErrorMessage()
{
	return errorMessage;
}

int Exception::getErrorNum()
{
	return errorNum;
}
