// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: MyVector.h
// Date: 10/8/2015
// Contents: project04 creating a vector-of-integers class

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------

#include "MyVector.h"
#include <iostream>

using namespace std;


MyVector::MyVector()
{
	//create a vector with size 0 and capacity 2
	vectorSize = 0;
	vectorCapacity = 2;
	myPointer = new int[vectorSize];
}

MyVector::MyVector(int n)
{
	//create a vector of capacity n with the size 0
	vectorSize = 0;
	vectorCapacity = n;
	myPointer = new int[vectorSize];
}


MyVector::~MyVector()
{
	//check to see if 'myPointer' has a value and delete it
	if (myPointer != NULL)
	{
		delete [] myPointer;
		myPointer = NULL;
	}
}

int MyVector::size() const
{
	//return the size of the vector
	return vectorSize;
}

int MyVector::capacity() const
{
	//return the capacity of the vector
	return vectorCapacity;
}

void MyVector::clear()
{
	//clear the vector and reset it to a size of 0 and capacity of 2
	vectorSize = 0;
	vectorCapacity = 2;
	delete[] myPointer;
	myPointer = new int[vectorSize];
}

void MyVector::push_back(int addToVector)
{
	//this variable will be used to double the capacity
	const int DOUBLE_CAPACITY = 2;

	//check to see if the size of the vector has reached the capacity
	if (!(vectorSize < vectorCapacity))
	{
		//make sure the capacity of the vector is greater than 0
		if (vectorCapacity > 0)
		{
			vectorCapacity *= DOUBLE_CAPACITY;
		}
		else 
		{
			//if vector capacity is 0 or less then the capacity equals 2
			vectorCapacity = 2;
		}

		//create a tempVector that will have double the capacity of the last vector.
		int *tempVector = new int[vectorCapacity];

		//copy the contents of the old vector to the tempVector
		if (myPointer != NULL)
		{
			for (int i = 0; i < vectorCapacity; i++)
			{
				tempVector[i] = myPointer[i];
			}
		}
		//set the pointer to the new tempVector
		myPointer = tempVector;
	}
	//add the passed in value to the vector
	myPointer[vectorSize] = addToVector;
	//increment the size of the vector
	vectorSize++;
}

int MyVector::at(int x) const
{
	//throw exception if index outside the range of the vector
	if (x > (vectorSize - 1))
	{
		throw x;
	}
	//return the value of the integer stored at index x
	return myPointer[x];
}
