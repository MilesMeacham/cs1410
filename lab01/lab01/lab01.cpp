// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: lab01.cpp
// Date: 8/28/2015
// Contents: Lab01 Programming Assignment
// I delcare that the following source code was written
// solely by me, or provided by the instructor.
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string name will hold the user's name when they are prompted to enter it
	string name = "";
	
		cout << "Hello, my name is Hal, what is your name?\n";

		//prompts user to enter name
		getline(cin, name);

		cout << "Welcome to C++ " << name << ", let the adventure begin!\n";

		//this keeps the command window open
		system("PAUSE");

	return 0;

}