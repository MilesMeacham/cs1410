// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Account.cpp
// Date: 9/12/2015
// Contents: project02 The cpp file for the "Account" class

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------

#include "Account.h"



Account::Account()
{
	accountNumber = 0;
	accountBalance = 0;
}


Account::Account(Person p, int n, double b)
{
	personComp = p;
	accountNumber = n;
	accountBalance  = b;
}

string Account::getName() const
{
	return personComp.getName();
}

string Account::getAddress() const
{
	return personComp.getAddress(); 
}



int Account::getAccountNumber() const
{
	return accountNumber;
}

double Account::getAccountBalance() const
{
	return accountBalance;
}

void Account::makeDeposit(double deposit)
{
	accountBalance += deposit;
}

void Account::makeWithdrawal(double withdrawal)
{
	accountBalance -= withdrawal;
}