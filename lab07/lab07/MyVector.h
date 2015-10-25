// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: MyVector.h
// Date: 10/8/2015
// Contents: lab07 creating a vector-of-integers

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------

#pragma once
class MyVector
{
private:

	//declaring variables
	int *myPointer;
	int vectorSize;
	int vectorCapacity;

public:

	//Default Constructor
	//Purpose: Create vector with default capacity of 2
	//Parameter: void
	//Return: None
	MyVector();

	//Parameterized Constructor
	//Purpose: Creates a vector of capacity "n"
	//Parameter: int
	//Return: None
	MyVector(const int);

	//Default Deconstructor
	//Purpose: Delets any dynamically allocated storage
	//Parameter: void
	//Return: None
	~MyVector();

	//The size Function
	//Purpose: returns the size of the vector
	//Parameter: void
	//Return: int
	int size() const;

	//The capacity Function
	//Purpose: returns the capacity of the vector
	//Parameter: void
	//Return: int
	int capacity() const;

	//The clear Function
	//Purpose: Deletes all elements from the vector and resets the size and capacity
	//Parameter: void
	//Return: None
	void clear();

	//The push_back Function
	//Purpose: adds an integer to the vector
	//Parameter: int
	//Return: None
	void push_back(const int);

	//The at Function
	//Purpose: returns the value of the element at position n
	//Parameter: int
	//Return: None
	void at(const int);
};



