// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Driver.cpp
// Date: 9/12/2015
// Contents: project02 The Driver file for the assignment

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------


#include "Driver.h"
#include <string>

//declaring variables
vector<Account> myAccounts;

string bilbo = "Bilbo Baggins";
string bilboAddress = "43 Bag End";
string gandalf = "Wizard Gandalf";
string gandalfAddress = "Crystal Palace";
string elrond = "Elf Elrond";
string elrondAddress = "Rivendell";

int accountOne = 1;
int accountTwo = 2;
int accountThree = 3;

double accountOneBalance = 500;
double accountTwoBalance = 1000;
double accountThreeBalance = 1200;

double deposit = 25;
double withdrawal = 100;


int main()
{
	
	//creating objects of type "Person"
	Person person1(bilbo, bilboAddress);
	Person person2(gandalf, gandalfAddress);
	Person person3(elrond, elrondAddress);

	//creating objects of type "Account"
	Account firstAccount(person1, accountOne, accountOneBalance);
	Account secondAccount(person2, accountTwo, accountTwoBalance);
	Account thirdAccount(person3, accountThree, accountThreeBalance);

	//putting Account Objects into a vector
	myAccounts.push_back(firstAccount);
	myAccounts.push_back(secondAccount);
	myAccounts.push_back(thirdAccount);

	//deposit money into the accounts
	for (int i = 0; i < myAccounts.size(); i++)
	{
		myAccounts[i].makeDeposit(deposit);
	}

	//withdrawal money from the accounts
	for (int n = 0; n < myAccounts.size(); n++)
	{
		myAccounts[n].makeWithdrawal(withdrawal);
	}

	//call function "displayAccounts"
	displayAccounts(myAccounts);

	system("Pause");

	return 0;
}
