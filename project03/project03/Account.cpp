// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Account.cpp
// Date: 9/27/2015
// Contents: project03 The cpp file for the "Account" class

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------

#include "Account.h"
#include "Exception.h"
#include "Person.h"


//Account Class Implementation
Account::Account()
{
	accountNumber = 0;
	accountBalance = 0;
	fileData = 0;
}


Account::Account(Person* p, int n, double b)
{
	accountHolder = p;
	accountNumber = n;
	accountBalance = b;
}

string Account::getName() const
{
	return accountHolder->getName();
}

string Account::getAddress() const
{
	return accountHolder->getAddress();
}

int Account::getAccountNumber() const
{
	return accountNumber;
}


/*
double Account::getAccountBalance() const
{
	return accountBalance;
}
*/
void Account::makeDeposit(const double& deposit)
{
	accountBalance += deposit;
}

void Account::makeWithdrawal(const double& withdrawal)
{
	accountBalance -= withdrawal;
}

void Account::readData(ifstream& inFile)
{
	if (inFile.eof())
		throw Exception(1, "End of file reached while creating object");

	if (inFile.fail())
		throw Exception(2, "Unknown Error while reading data from the file");

	inFile >> accountNumber;
	inFile.ignore();
	accountHolder->readData(inFile);
	inFile >> accountBalance;
	inFile.ignore();
}

void Account::writeData(ofstream& outFile) const
{
	outFile << accountNumber << endl;
	accountHolder->writeData(outFile);
	outFile << accountBalance << endl;
}

//SavingsAccount implementation
SavingsAccount::SavingsAccount() 
{

	interestRate = 0;

}

SavingsAccount::SavingsAccount(Person* p, int acctNum, double acctBal, double intRate)
	:Account(p, acctNum, acctBal)
{
	
	interestRate = intRate;

}

double SavingsAccount::getAccountBalance() const
{
	double currentBalance = accountBalance;

	currentBalance += interestRate;

	return currentBalance;
}

void SavingsAccount::readData(ifstream& inFile)
{
	if (inFile.eof())
		throw Exception(1, "End of file reached while creating object");

	if (inFile.fail())
		throw Exception(2, "Unknown Error while reading data from the file");

	inFile >> interestRate;
	Account::readData(inFile);
	
}

void SavingsAccount::writeData(ofstream& outFile) const
{
	outFile << "savings\n";
	outFile << interestRate << endl;
	Account::writeData(outFile);
}


//CheckingAccount implementation
CheckingAccount::CheckingAccount() {

	monthlyFee = 0;

}

CheckingAccount::CheckingAccount(Person* p, int acctNum, double acctBal, int monthFee)
	:Account(p, acctNum, acctBal)
{

	monthlyFee = monthFee;

}

double CheckingAccount::getAccountBalance() const
{
	double currentBalance = accountBalance;

	currentBalance -= monthlyFee;

	return currentBalance;
}

void CheckingAccount::readData(ifstream& inFile)
{
	if (inFile.eof())
		throw Exception(1, "End of file reached while creating object");

	if (inFile.fail())
		throw Exception(2, "Unknown Error while reading data from the file");

	inFile >> monthlyFee;
	Account::readData(inFile);

}

void CheckingAccount::writeData(ofstream& outFile) const
{
	outFile << "checking\n";
	outFile << monthlyFee << endl;
	Account::writeData(outFile);
}