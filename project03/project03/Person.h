// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Person.h
// Date: 9/27/2015
// Contents: project03 The header file for the "Person" class

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------


#pragma once
#include <string>
#include <fstream>

using namespace std;

class Person
{
private:
	string name;
	string address;
	string fileData;


public:

	//Default Constructor
	//Purpose: Removes any data in "name" and "address"
	//Parameter: void
	//Return: None
	Person();

	//Parameterized Constructor
	//Purpose: Set name and address equal to "n" and "a"
	//Parameter: two Strings, "name" and "address
	//Return: None
	Person(string, string);

	//The getName Function
	//Purpose: Returns the name of the person
	//Parameter: None
	//Return: string (name)
	string getName() const;

	//The getName Function
	//Purpose: Returns the address of the person
	//Parameter: None
	//Return: string (address)
	string getAddress() const;

	//The readData Function
	//Purpose: Reads data from a file
	//Parameter: ifstream
	//Return: None
	void readData(ifstream&);

	//The writeData Function
	//Purpose: Writes data to a file
	//Parameter: ofstream
	//Return: None
	void writeData(ofstream&) const;

};

