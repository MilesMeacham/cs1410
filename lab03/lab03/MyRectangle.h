#pragma once
// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: MyRectangle.h
// Date: 9/10/2015
// Contents: lab03 Assignment Rectangle Class Header File

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------


class MyRectangle
{
private:
	int height;
	int width;

public:
	//Default Constructor
	//Purpose: Sets Height and Width to zero
	//Parameter: Void
	//Return: None
	MyRectangle();

	//Parameterized Constructor
	//Purpose: Set Height and Width to "h" and "w"
	//Parameter: two ints. Height and Width which is "h" and "w"
	//Return: None
	MyRectangle(int, int);

	//The getHeight function
	//Purpose: Returns the Height of the rectangle
	//Parameter: none
	//Return: int (height)
	int getHeight() const;

	//The getWidth function
	//Purpose: Returns the Width of the rectangle
	//Parameter: none
	//Return: int (width)
	int getWidth() const;

	//The getArea function
	//Purpose: Returns the Area of the rectangle
	//Parameter: none
	//Return: int (width * height)
	int getArea() const;


};

