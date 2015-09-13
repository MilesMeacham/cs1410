// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: MyRectangle.cpp
// Date: 9/10/2015
// Contents: lab03 Assignment Rectangle Class

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------



#include "MyRectangle.h"


MyRectangle::MyRectangle()
{
	height = 0;
	width = 0;
}


MyRectangle::MyRectangle(int h, int w)
{
	height = h;
	width = w;
}

int MyRectangle::getHeight() const
{
	return height;
}

int MyRectangle::getWidth() const
{
	return width;
}

int MyRectangle::getArea() const
{
	return width * height;
}