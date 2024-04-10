#include <iostream>
#include <string>
#include <iomanip>
#include "Customer.h"
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
using namespace std;

int main()
{
#pragma region Header
	const int LINELENGTH = 52;
	string header(LINELENGTH, '~');
	string space(12, ' ');
	cout << header << endl << space << "Welcome to Banking United!" << endl << header << endl;
	const char separator = ' ';
	const int numWidth = 20;
	int opt = 0;
	int cont = 0;
#pragma endregion

	CheckingAccount checking[20] = { CheckingAccount(2005, "John", "Doe", "2320 Default Lane", "jDoe@gmail.com", 9045529552, 350, 0, 0, 150, 200)};
	SavingAccount saving[20] = { SavingAccount(2005, "John", "Doe", "2320 Default Lane", "jDoe@gmail.com", 9045529552, 100, 0, 0, 150, .05) };
	int currentCheckings = 0;
	int currentSavings = 0;
	for (int i = 0; i < 20; i++) {
		if (checking[i].getID() != 0)
			currentCheckings++;
	}
	for (int i = 0; i < 20; i++) {
		if (saving[i].getID() != 0)
			currentSavings++;
	}

	do {
		cout << header << endl << "Enter a number according to the options below: " << endl;
		cout << "0: View Checking Account Information" << endl <<
			"1: View Saving Account Information" << endl <<
			"2: Spend Reward Points" << endl <<
			"3: Create New Checking Account" << endl <<
			"4: Create New Saving Account" << endl <<
			"5: Modify Existing Checking Account" << endl <<
			"6: Modify Existing Saving Account" << endl <<
			"7: Delete Existing Checking Account" << endl <<
			"8: Delete Existing Saving Account" << endl <<
			"9: Exit" << endl << header << endl;
		cin >> opt;

		switch (opt) {
		case 0:
			system("CLS");
			cout << header << header << endl <<
				space << space << "       Now Viewing Checking Account Information" << endl;
			cout << header << header << endl << 
				left << setw(numWidth) << setfill(separator) << "Account #" << 
				left << setw(numWidth) << setfill(separator) << "First Name" << 
				left << setw(numWidth) << setfill(separator) << "Last name" << 
				left << setw(numWidth) << setfill(separator) << "Balance" << 
				left << setw(numWidth) << setfill(separator) << "Current Reward Points" << endl
				<< header << header << endl;
			//Account information goes here
			for (int i = 0; i < currentCheckings; i++) {
				checking[i].PrintInfo();
			}
			cout << header << header << endl;

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 1:
			system("CLS");
			cout << header << header << endl <<
				space << space << "       Now Viewing Saving Account Information" << endl;
			cout << header << header << endl <<
				left << setw(numWidth) << setfill(separator) << "Account #" <<
				left << setw(numWidth) << setfill(separator) << "First Name" <<
				left << setw(numWidth) << setfill(separator) << "Last name" <<
				left << setw(numWidth) << setfill(separator) << "Balance" <<
				left << setw(numWidth) << setfill(separator) << "Current Reward Points" << endl
				<< header << header << endl;
			//Account information goes here
			for (int i = 0; i < currentSavings; i++) {
					saving[i].PrintInfo();
			}
			cout << header << header << endl;

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 2:
			system("CLS");
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 3:
			system("CLS");
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 4:
			system("CLS");
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 5:
			system("CLS");
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 6:
			system("CLS");
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 7:
			system("CLS");
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 8:
			system("CLS");
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		default:
			system("CLS");
			cout << header << endl
				<< "        " << "Thank you for using Banking United!" << endl
				<< header;
				break;
		}
	} while (opt < 9);
}