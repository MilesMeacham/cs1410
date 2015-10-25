// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: lab06.cpp
// Date: 9/30/2015
// Contents: lab06 - Pointers

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------

#include <iostream>

using namespace std;

//The "reverser" Function
//Purpose: Reverses the characters in a c-string
//Parameter: char*
//Return: None
void reverser(char*);

int main()
{
	// declare a c-string to reverse
	char myString[] = "Hello world!";
//	cout << myString << endl;

	// call the reverse function
	reverser(myString);

	// output the result
	cout << myString << endl;

	system("Pause");
	return 0;
}

void reverser(char *s)
{
	// declare variables
	char *pointerBeg = s;
	char *pointerEnd = s;
	int size = 0;
	int counter = 0;

	// do loop to count how long c-string is
	do
	{
		size++;
		pointerEnd++;
	} while (*pointerEnd != '\0');

	//decrement "pointerEnd" so it is pointing to last char in string and not '\0'
	pointerEnd--;

	// declare temporary char to use while swapping
	char temp = *pointerBeg;

	// do loop that reverse the string
	do
	{
		// change first to last and last to first
		temp = *pointerBeg;
		*pointerBeg = *pointerEnd;
		*pointerEnd = temp;

		// increment/decrement variables
		pointerBeg++;
		pointerEnd--;
		counter++;

	//run loop until pointers meet in middle
	} while (counter != size/2);

	return;
}