/*
Jeff Koss
04/07/24
MS549
*/


#include <iostream>
#include <memory>
#include <windows.h>

using namespace std;

bool gameOver = true;

void personalData();

int main()
{
	while(gameOver == true)
	{ 
		personalData();
	}
	return 0;
}

void personalData()
{
	unique_ptr<string> firstName(new string);
	unique_ptr<string> lastName(new string);
	unique_ptr<string> empNumber(new string);
	unique_ptr<string> payAmount(new string);
	unique_ptr<string> payDay(new string);
	int choice;
	string choice1;
	string choice2;
	string choice3;
	string choice4;
	string choice5;
	
	system("cls");
	cout << "************" << endl;
	cout << "* Personal *" << endl;
	cout << "*  Info    *" << endl;
	cout << "************" << endl;
	cout << "\n1. First Name" << endl;
	cout << "2. Last Name" << endl;
	cout << "3. Employee Number" << endl;
	cout << "4. Pay Amount" << endl;
	cout << "5. Pay Frequency" << endl;
	cout << "6. Display Info" << endl;
	cout << "7. End Program" << endl;

	cout << "\n Please select a number: ";
	cin >> choice;

	if (choice == 1)
	{
		cout << "\nPlease Enter your first name: ";
		cin >> choice1;
		*firstName = choice1;
		cout << "\nYou first name is: " << *firstName << endl;
		cout << "Stored at address: " << &firstName << endl;
		system("pause");
		personalData();
	}

	if (choice == 2)
	{
		cout << "\nPlease Enter your last name: ";
		cin >> choice3;
		*lastName = choice2;
		cout << "\nYou first name is: " << *lastName << endl;
		cout << "Stored at address: " << &lastName << endl;
		system("pause");
		personalData();
	}

	if (choice == 3)
	{
		cout << "\nPlease Enter Employee Number: ";
		cin >> choice3;
		*empNumber = choice3;
		cout << "\nYou employee number is: " << *empNumber << endl;
		cout << "Stored at address: " << &empNumber << endl;
		system("pause");
		personalData();
	}

	if (choice == 4)
	{
		cout << "\nPlease your pay amount: ";
		cin >> choice4;
		*payAmount = choice4;
		cout << "\nYou pay amount is: " << *payAmount << endl;
		cout << "Stored at address: " << &payAmount << endl;
		system("pause");
		personalData();
	}

	if (choice == 5)
	{
		cout << "\nPlease Enter your pay frequency: ";
		cin >> choice5;
		*payDay = choice5;
		cout << "\nYour pay frequency is: " << *payDay << endl;
		cout << "Stored at address: " << &payDay << endl;
		system("pause");
		personalData();
	}

	if (choice == 7)
	{
		gameOver = false;
	}

}