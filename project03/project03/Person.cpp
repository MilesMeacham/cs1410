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


#include "Person.h"
#include "Exception.h"
#include <string>

using namespace std;



Person::Person()
{
	name = "";
	address = "";
	fileData = "";
}


Person::Person(string n, string a)
{
	name = n;
	address = a;
}

string Person::getName() const
{
	return name;
}

string Person::getAddress() const
{
	return address;
}

void Person::readData(ifstream& inFile)
{
	
	getline(inFile, name);
	if (!inFile)
		throw Exception(3, "Cannot read name");


	getline(inFile, address);
	if (!inFile)
		throw Exception(3, "Cannot read address");

	
}

void Person::writeData(ofstream& outFile) const
{
	outFile << name << endl;
	outFile << address << endl;
}