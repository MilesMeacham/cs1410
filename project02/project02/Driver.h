// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Driver.h
// Date: 9/12/2015
// Contents: project02 The Header file for the Driver

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------


#pragma once
#include <vector>
#include <iostream>
#include <iomanip>
#include "Account.h"
#include "Person.h"

using namespace std;


//The displayAccounts Function
//Purpose: prints out the account information for each account in a vector
//Parameter: vector, (accounts)
//Return: none
void displayAccounts(vector<Account> const &accounts)
{
	//column width variables
	int columnOne = 13;
	int columnTwo = 20;
	int columnThree = 20;
	int columnFour = 10;

	//Decimal places variable
	int decimalPlaces = 2;

	//printing out the header info to the columns
	cout << "\nHobbit National Bank\n";
	cout << left << setw(columnOne) << "Account #" <<
			setw(columnTwo) << "Account Name" <<
			setw(columnThree) << "Address" <<
			setw(columnFour) << "Balance\n" << endl;
			
	//print out the account information for each account
	for (int i = 0; i < accounts.size(); i++)
	{
		cout.precision(decimalPlaces);
		cout << fixed;
		cout << setw(columnOne) << accounts[i].getAccountNumber() <<
				setw(columnThree) << accounts[i].getName() <<
				setw(columnThree) << accounts[i].getAddress() << "$" <<
				setw(columnFour) << accounts[i].getAccountBalance() << endl;

	}

	cout << endl;

	return;
}