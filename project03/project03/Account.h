// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Account.h
// Date: 9/27/2015
// Contents: project03 The header file for the "Account" class

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------


#pragma once
#include "Person.h"
#include <fstream>
#include <string>

using namespace std;

class Account
{
private:
	int accountNumber;
	Person* accountHolder;
	double fileData;

protected:
	double accountBalance;

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
	Account(Person*, int, double);

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
	virtual double getAccountBalance() const = 0;

	//The makeDeposit Function
	//Purpose: Adds the Deposit to the account balance
	//Parameter: double
	//Return: void
	void makeDeposit(const double&);

	//The makeWithdrawal Function
	//Purpose: Removes the Withdrawal from the account balance
	//Parameter: double
	//Return: void
	void makeWithdrawal(const double&);

	//The readData Function
	//Purpose: Reads data from a file
	//Parameter: ifstream
	//Return: string
	virtual void readData(ifstream&);

	//The writeData Function
	//Purpose: Writes data to a file
	//Parameter: ofstream
	//Return: None
	virtual void writeData(ofstream&) const;
};

// The SavingsAccount class inherits from the Account class
class SavingsAccount : public Account
{
private:
	double interestRate;

public:

	//Default Constructor
	//Purpose: Initialize Savings account with default values
	//Parameter: void
	//Return: None
	SavingsAccount();

	//Parameterized Constructor
	//Purpose: Initialize Savings account with provided values
	//Parameter: person, int and double, "Person", "accountNumber", "accountBalance" and "interestRate"
	//Return: None
	SavingsAccount(Person *, int, double, double);

	//The getAccountBalance Function
	//Purpose: Get the Account Balance of the Savings Account
	//Parameter: None
	//Return: double
	double getAccountBalance() const;

	//The readData Function
	//Purpose: Reads data from a file
	//Parameter: ifstream
	//Return: None
	void readData(ifstream&);

	//The writeData Function
	//Purpose: Writes data to a file
	//Parameter: ofstream
	//Return: None
	void writeData(ofstream&) const;



};


// The CheckingAccount class inherits from the Account class
class CheckingAccount : public Account
{
private:
	int monthlyFee;

public:

	//Default Constructor
	//Purpose: Initialize Checking account with default values
	//Parameter: void
	//Return: None
	CheckingAccount();

	//Parameterized Constructor
	//Purpose: Initialize Checking account with provided values
	//Parameter: person, int, double and int; "Person", "accountNumber", "accountBalance" and "monthlyFee"
	//Return: None
	CheckingAccount(Person *, int, double, int);

	//The getName Function
	//Purpose: Get the Account Balance of the Checking Account
	//Parameter: None
	//Return: double
	double getAccountBalance() const;

	//The readData Function
	//Purpose: Reads data from a file
	//Parameter: ifstream
	//Return: None
	void readData(ifstream&);

	//The writeData Function
	//Purpose: Writes data to a file
	//Parameter: ofstream
	//Return: None
	void writeData(ofstream&) const;

};
