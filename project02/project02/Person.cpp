// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Person.cpp
// Date: 9/12/2015
// Contents: project02 The cpp file for the "Person" class

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------


#include "Person.h"
#include <string>

using namespace std;



Person::Person()
{
	name = "";
	address = "";
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