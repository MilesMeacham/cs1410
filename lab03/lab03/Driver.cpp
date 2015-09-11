// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Driver.cpp
// Date: 9/10/2015
// Contents: lab03 Assignment Rectangle Class Driver File

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------

#include <iostream>
#include "MyRectangle.h"

using namespace std;

//declaring variables to be used
const int HEIGHT = 4;
const int WIDTH = 7;



int main()
{
	//creating a new rectangle named "rectangle"
	MyRectangle rectangle(HEIGHT, WIDTH);

	//Outputing the height, width, and area of the rectangle using the class functions
	cout << "The height of your rectangle is " << rectangle.getHeight() << endl;
	cout << "The width of your rectangle is " << rectangle.getWidth() << endl;
	cout << "The area of your rectangle is " << rectangle.getArea() << endl << endl;

	system("Pause");
}