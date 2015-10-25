// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: Driver.cpp
// Date: 9/27/2015
// Contents: project03 The Driver file for the assignment

// I delcare that the following source code was written solely by me, or provided by the instructor.
// I understand that copying any source code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am found in violation of this policy.
// ----------------------------------------


#include "Driver.h"
#include "Exception.h"
#include <string>
#include <fstream>


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

const double ACCOUNT_ONE_BALANCE = 500;
const double ACCOUNT_TWO_BALANCE = 1000;
const double ACCOUNT_THREE_BALANCE = 1200;

const double ACCOUNT_ONE_INTEREST_RATE = 0.075;
const int ACCOUNT_TWO_MONTHLY_FEE = 2.00;
const double ACCOUNT_THREE_INTEREST_RATE = 0.050;

double deposit = 25;
double withdrawal = 100;


int main()
{

	vector<Account*> accountPointers;

	//creating objects of type "Person"
	//Person person1(bilbo, bilboAddress);
	//Person person2(gandalf, gandalfAddress);
	//Person person3(elrond, elrondAddress);

	//creating objects of type "Account"
	accountPointers.push_back(new SavingsAccount (new Person(bilbo, bilboAddress), accountOne, ACCOUNT_ONE_BALANCE, ACCOUNT_ONE_INTEREST_RATE));
	accountPointers.push_back(new CheckingAccount (new Person(gandalf, gandalfAddress), accountTwo, ACCOUNT_TWO_BALANCE, ACCOUNT_TWO_MONTHLY_FEE));
	accountPointers.push_back(new SavingsAccount (new Person(elrond, elrondAddress), accountThree, ACCOUNT_THREE_BALANCE, ACCOUNT_THREE_INTEREST_RATE));
	//Account secondAccount(person2, accountTwo, ACCOUNT_TWO_BALANCE);
	//Account thirdAccount(person3, accountThree, ACCOUNT_THREE_BALANCE);

	//putting Account Objects into a vector
	//myAccounts.push_back(firstAccount);
	//myAccounts.push_back(secondAccount);
	//myAccounts.push_back(thirdAccount);

	//Creating an ofstream and ifstream object
	ofstream outputFile;
	ifstream inputFile;

	//file is in same folder as .exe
	//open the file
	outputFile.open("Accounts.txt");

	//check to see if file.open failed
	if (outputFile.fail())
	{
		cout << "Could not open the file.\n";
		system("Pause");
		return 0;
	}


	//write accounts to file using the accounts "writeData" funciton
	for (int x = 0; x < accountPointers.size(); x++)
	{
		accountPointers[x]->writeData(outputFile);
		//myAccounts[x].writeData(outputFile);
	}

	//close the file and clear the vector
	outputFile.close();
	accountPointers.clear();

	inputFile.open("Accounts.txt");

	//check to see if file.open failed
	if (inputFile.fail())
	{
		throw Exception(1, "File did not open");
		system("Pause");
		return 0;
	}

	string type;
	Account* aPtr;
	int myCounter = 0;


	while (inputFile >> type)
	{

		if (type == "savings") {
			aPtr = new SavingsAccount();
			cout << "Savings Account" << endl;
			system("PAUSE");
		}
		else if (type == "checking")
			aPtr = new CheckingAccount();
		else
		{

			cout << "\nunexpected data in file, program will now terminate";
			system("PAUSE");
			exit(1);
		}
		
		aPtr->readData(inputFile);
		accountPointers[myCounter] = aPtr;
		myCounter++;

	}




	/*
	//This will put the contents of the file into the Vector
	do
	{
		try
		{
				//Create new Account Object
				Account newAccount;

				//read the file and input the information
				newAccount.readData(inputFile);

				//add the account to the "myAccounts" array
				myAccounts.push_back(newAccount);
		}
		//Output error message if fails
		catch (Exception error)
		{
			cout << "Error #" << error.getErrorNum() << " Message: " << error.getErrorMessage() << endl;
		}
	//wait until the end of the file is reached
	} while (!inputFile.eof());

	*/

	//deposit money into the accounts
	for (int i = 0; i < accountPointers.size(); i++)
	{
		accountPointers[i]->makeDeposit(deposit);
	}

	//withdrawal money from the accounts
	for (int n = 0; n < accountPointers.size(); n++)
	{
		accountPointers[n]->makeWithdrawal(withdrawal);
	}

	//call function "displayAccounts"
	displayAccounts(accountPointers);
	//displayAccounts(myAccounts);


	system("Pause");

	return 0;
}
