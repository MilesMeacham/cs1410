// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Account.h
// Date: 9/12/2015
// Contents: project02 The header file for the "Account" class

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------


#pragma once
#include "Person.h"


class Account
{
private:
	int accountNumber;
	double accountBalance;
	Person personComp;

public:
	//Default Constructor
	//Purpose: Removes any data in "accountNumber" and "accountBalance"
	//Parameter: void
	//Return: None
	Account();

	//Parameterized Constructor
	//Purpose: Set accountNumber and accountBalance equal to "n" and "b"
	//Parameter: person, int and double, "Person", "accountNumber" and "accountBalance"
	//Return: None
	Account(Person, int, double);

	//The getName Function
	//Purpose: Get the Name of personComp from the "Person" class
	//Parameter: None
	//Return: String
	string getName() const;

	//The getAddress Function
	//Purpose: Get the Address of personComp from the "Person" class
	//Parameter: None
	//Return: String
	string getAddress() const;

	//The getAccountNumber Function
	//Purpose: Returns the account number
	//Parameter: None
	//Return: int (accountNumber)
	int getAccountNumber() const;

	//The getAccountBalance Function
	//Purpose: Returns the account balance
	//Parameter: None
	//Return: double (accountBalance)
	double getAccountBalance() const;

	//The makeDeposit Function
	//Purpose: Adds the Deposit to the account balance
	//Parameter: double
	//Return: void
	void makeDeposit(double);

	//The makeWithdrawal Function
	//Purpose: Removes the Withdrawal from the account balance
	//Parameter: double
	//Return: void
	void makeWithdrawal(double);
};

