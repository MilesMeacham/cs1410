// Author: Miles Meacham
// Course: CS-1410-X01-deBry-Fall 2015 
// Instructor: Professor deBry
// File: project01.cpp
// Date: 8/29/2015
// Contents: Project01 Programming Assignment
// I delcare that the following source code was written
// solely by me, or provided by the instructor.
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// ----------------------------------------

#include <iostream>
#include <string>

using namespace std;

//multiplys cost by either weight or number of items being shipped
float shipBy(float x, float y, float z)
{
	float shipByCost;
	float weight;
	float numOfItems;
	string shipBy;
	bool keepLoop = true;
	bool keepItemLoop = true;

	cout << "\nWould you like to ship by:\n";
	cout << "1 - Weight\n";
	cout << "2 - Number of Items\n";

	do
	{
		cout << ">>";
		cin >> shipBy;

		if (shipBy == "1")
		{
			cout << "\nHow much does the package weigh?  ";

			cin >> weight;
			
			while (keepLoop == true)
			{
				//determine wether the user input is greater than zero
				if (weight <= 0)
				{
					cout << "\nPlease enter a number greater than zero.  ";
					cin >> weight;
				}
				else
				{
					keepLoop = false;
				}
			}

			//return the cost of shipping based on the weight
			shipByCost = weight * x + z;

			return shipByCost;
		}
		else if (shipBy == "2")
		{
			cout << "\nHow many items are you shipping?  ";

			cin >> numOfItems;

			while (keepItemLoop == true)
			{
				//determine if user input is a whole number and greater than zero
				if (numOfItems != floor(numOfItems) || numOfItems <= 0)
				{
					cout << "\nPlease enter a whole number that is greater than zero.  ";
					cin >> numOfItems;
				}
				else
				{
					keepItemLoop = false;
				}
			}

			//return the cost of shipping based on number of items
			shipByCost = numOfItems * y + z;

			return shipByCost;
		}
		else
		{
			cout << "\nPlease enter a valid respons. (1/2)  ";
		}

	} while (shipBy != "1" || shipBy != "2");

}

//multiplys cost by the shipping rate and if it is going to AL or HI
float shipDays()
{
	string shippingRate;
	float shippingWeightCost;
	float shippingItemCost;
	string alaskaHawaii;
	float akHiSurcharge;
	float shippingCost;
	bool alaska = true;
	bool continueLoop = true;


	cout << "\nHow would you like to ship the package?\n";
	cout << "1 - Standard Shipping\n";
	cout << "2 - Express Shipping\n";
	cout << "3 - Same Day Shipping\n";

	cout << ">>";
	cin >> shippingRate;

	//depending on what is entered, the program will assign the costs
	while (continueLoop == true)
	{
		if (shippingRate == "1")
		{
			shippingItemCost = 3;
			shippingWeightCost = 1.45;
			akHiSurcharge = 2.50;
			continueLoop = false;
		}
		else if (shippingRate == "2")
		{
			shippingItemCost = 4;
			shippingWeightCost = 2.50;
			akHiSurcharge = 5;
			continueLoop = false;
		}
		else if (shippingRate == "3")
		{
			shippingItemCost = 5.50;
			shippingWeightCost = 3;
			akHiSurcharge = 8;
			continueLoop = false;
		}
		else
		{
			cout << "\nPlease enter a valid response. (1, 2 or 3)  ";
			cin >> shippingRate;
		}
	}

	//Already calculated how much it will cost to send to AL or HI. 
	//If the answer "No" here it will set the AL, HI surcharge to $0 as to not charge them for it
	//If the answer is "Yes" it will leave the value alone
	cout << "\nIs this package being shipped to either Hawaii or Alaska (y/n):  ";
	cin >> alaskaHawaii;

	while (alaska == true)
	{ 
		if (alaskaHawaii == "y")
		{
			alaska = false;
		}
		else if (alaskaHawaii == "n")
		{
			akHiSurcharge = 0;
			alaska = false;
		}
		else
		{
			cout << "\nPlease enter a valid response. (y/n)  ";
			cin >> alaskaHawaii;
		}
	}

	//call the "shipBy" function that will multiply these numbers by the weight or amount of items being shipped.
	shippingCost = shipBy(shippingWeightCost, shippingItemCost, akHiSurcharge);

	//return the shipping cost to the main function
	return shippingCost;
}

int main()
{

	float cost;
	string parcelShipResponse;
	bool getShipDetails = true;
	bool doneShip = true;
	bool anotherShipment = true;
	bool parcelShipment = true;

	cout << "Welcome to Red Fern Shipping!\n";
	cout << "\nWould you like to ship a parcel today? (y/n)  ";

	cin >> parcelShipResponse;

		while (doneShip == false);
		{
		//	getShipDetails = true;

			while (getShipDetails == true)
			{
				while (parcelShipment == true)
				{
					

					if (parcelShipResponse == "y")
					{
						//call the "shipDays" function to calculate the shipping cost
						cost = shipDays();
						parcelShipment = false;
					}
					else if (parcelShipResponse == "n")
					{
						parcelShipment = false;
						getShipDetails = false;
						doneShip = true;
					}
					else
					{
						cout << "\nPlease enter a valid response. (y/n)  ";
						cin >> parcelShipResponse;
					}
				}

				//Tell user what shipping will cost based on his inputs
				cout << "\nShipping will cost you $" << cost;

				//Allow user to ship another parcel
				cout << "\n\nWould you like to ship another parcel? (y/n)  ";

				anotherShipment = true;

				if (anotherShipment == true)
				{
					cin >> parcelShipResponse;

					if (parcelShipResponse == "y")
					{
						parcelShipment = true;
						getShipDetails = true;
						anotherShipment = false;
					}
					else if (parcelShipResponse == "n")
					{
						getShipDetails = false;
						anotherShipment = false;
						break;
					}
					else
					{
						cout << "\nPlease enter a valid response. (y/n)  ";
					}
				}
			}

			doneShip = true;

			
		}

		cout << "\nThank you for using Red Fern Shipping. Have a nice day.\n";

		system("Pause");


	return 0;
}

