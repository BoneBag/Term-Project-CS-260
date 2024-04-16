#include <iostream>
#include <string.h>
#include <iomanip>
#include "Customer.h"
#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
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

	CheckingAccount checking[20] = { CheckingAccount(2005, "John", "Doe", "2320 Default Lane", "jDoe7@gmail.com", "9045529552", 350, 0, 0, 150, 200),
	CheckingAccount(2026, "Jane", "Doe", "2440 Average Lane", "jDoe12@gmail.com", "9049937890", 2050, 10, 25, 300, 250) };

	SavingAccount saving[20] = { SavingAccount(2005, "John", "Doe", "2320 Default Lane", "jDoe@gmail.com", "9045529552", 100, 0, 0, 150, .05) };
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

#pragma region Account Variables
	int _ID = 0;
	string _fname = "";
	string _lname = "";
	string _address = "";
	string _email = "";
	string _phone = "";
	double _balance = 0;
	int _wds = 0;
	int _depos = 0;
	int _pts = 0;
	double _overDL = 0;
	double _intR = 0;
#pragma endregion

	do {
		cout << header << endl << "Enter a number according to the options below: " << endl;
		cout << "0: View Checking Account Information" << endl <<
			"1: View Saving Account Information" << endl <<
			"2: Reward Points Shop" << endl <<
			"3: Create New Checking Account" << endl <<
			"4: Create New Savings Account" << endl <<
			"5: Modify Existing Checking Account" << endl <<
			"6: Modify Existing Saving Account" << endl <<
			"7: Delete Existing Checking Account" << endl <<
			"8: Delete Existing Saving Account" << endl <<
			"9: Exit" << endl << header << endl;
		cin >> opt;

		switch (opt) {
			// Checking info
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
			//Savings info
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
			// Rewards Shop
		case 2:
			system("CLS");
			int option;
			int userID;
			cout << header << endl;
			cout << space << "Welcome to the Reward Points Shop!" << endl;
			cout << header << endl;
			cout << "--Please choose how you would like to spend your rewards--" << endl;
			cout << endl;
			cout << left << setw(numWidth) << setfill(separator) << "1: Travel" <<
				left << setw(numWidth) << setfill(separator) << "2: Gift Cards" <<
				left << setw(numWidth) << setfill(separator) << "3: Merchandise" << endl;
			cout << header << endl;
			cin >> option;
			cout << header << endl;
			cout << "Enter the ID of the account you'd like to spend reward points with: " << endl;
			cout << header << endl;
			cin >> userID;
			system("CLS");
			switch (option)
			{
			case 1:
				cout << header << endl;
				cout << space << "Select a travel option " << endl;
				cout << header << endl;
				cout << left << setw(numWidth) << setfill(separator) << " 1:Book a hotel"
					<< left << setw(numWidth) << setfill(separator) << " 2:Airfare" <<
					left << setw(numWidth) << setfill(separator) << " 3: Book a cruise" << endl;
				cout << header << endl;

				cin >> option;
				switch (option)
				{

				case 1:
					cout << header << endl;
					cout << "Use Rewards Points to book a hotel anywhere" << endl;
					cout << header << endl;
					cout << "1. Holiday Inn Express -1,000 points-" << endl <<
						"2. Hilton Grand Vacations -1,500 points- " << endl <<
						"3. Hyatt Regency -2,000 points- " << endl;
					cout << "Rewards can only be used on the listed hotels affiliated with Banking United" << endl;
					cout << header << endl;

					cin >> opt;
					switch (opt)
					{
					case 1:
						for (int i = 0; i < currentCheckings; i++) {
							if (checking[i].getID() == userID) {
								checking[i].UsePoints(1000);
							}
						}
						break;
					case 2:
						for (int i = 0; i < currentCheckings; i++) {
							if (checking[i].getID() == userID) {
								checking[i].UsePoints(1500);
							}
						}
						break;
					case 3:
						for (int i = 0; i < currentCheckings; i++) {
							if (checking[i].getID() == userID) {
								checking[i].UsePoints(2000);
							}
						}
						break;
					default:
						cout << "Inavlid menu option. Please try again. ";
						cin >> option;
						break;
					}
				}
				break;

			case 2:

				break;

			case 3:
				cout << header << endl;
				cout << space << "Merchandise Shop" << endl;
				cout << header << endl;
				cout << left << setw(numWidth) << setfill(separator) << " 1: BU Hoodie -100 points-" <<
					left << setw(numWidth) << setfill(separator) << " 2: BU T-Shirt -50 points-" <<
					left << setw(numWidth) << setfill(separator) << " 3: BU Thermos cup -40 points-" << endl;
				cout << header << endl;
				cin >> opt;
				switch (opt)
				{
				case 1:
					for (int i = 0; i < currentCheckings; i++) {
						if (checking[i].getID() == userID) {
							checking[i].UsePoints(100);
						}
					}
					break;
				case 2:
					for (int i = 0; i < currentCheckings; i++) {
						if (checking[i].getID() == userID) {
							checking[i].UsePoints(50);
						}
					}
					break;
				case 3:
					for (int i = 0; i < currentCheckings; i++) {
						if (checking[i].getID() == userID) {
							checking[i].UsePoints(40);
						}
					}
					break;
				}
				break;
			default:
				cout << "Inavlid menu option. Please try again. ";
				cin >> option;
				break;
			}

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
			// New Checking
		case 3:
			system("CLS");
			// Functionality goes here
			if (currentCheckings <= 20) {
				cout << "Enter the ID of the account: ";
				cin >> _ID;
				cout << "Enter the first name of the account holder: ";
				cin >> _fname;
				cout << "Enter the last name of the account holder: ";
				cin >> _lname;
				cout << "Enter the address of the account holder: ";
				cin.ignore();
				getline(cin, _address);
				cout << "Enter the email of the account holder: ";
				cin >> _email;
				cout << "Enter the phone number of the account holder: ";
				cin >> _phone;
				cout << "Enter the current balance of the account: ";
				cin >> _balance;
				cout << "Enter the current number of withdrawals for the account: ";
				cin >> _wds;
				cout << "Enter the current number of deposits for the account: ";
				cin >> _depos;
				cout << "Enter the current number of reward points for the account: ";
				cin >> _pts;
				cout << "Enter the current overdraft limit for the account: ";
				cin >> _overDL;
				checking[currentCheckings].newChecking(_ID, _fname, _lname, _address, _email, _phone, _balance, _wds, _depos, _pts, _overDL);
			}
			else {
				cout << "Maximum accounts reached" << endl;
			}
			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
			// New Savings
		case 4:
			system("CLS");
			// Functionality goes here
			if (currentSavings <= 20) {
				cout << "Enter the ID of the account: ";
				cin >> _ID;
				cout << "Enter the first name of the account holder: ";
				cin >> _fname;
				cout << "Enter the last name of the account holder: ";
				cin >> _lname;
				cout << "Enter the address of the account holder: ";
				cin.ignore();
				getline(cin, _address);
				cout << "Enter the email of the account holder: ";
				cin >> _email;
				cout << "Enter the phone number of the account holder: ";
				cin >> _phone;
				cout << "Enter the current balance of the account: ";
				cin >> _balance;
				cout << "Enter the current number of withdrawals for the account: ";
				cin >> _wds;
				cout << "Enter the current number of deposits for the account: ";
				cin >> _depos;
				cout << "Enter the current number of reward points for the account: ";
				cin >> _pts;
				cout << "Enter the current interest rate for the account: ";
				cin >> _intR;
				saving[currentSavings].newSaving(_ID, _fname, _lname, _address, _email, _phone, _balance, _wds, _depos, _pts, _intR);
			}
			else {
				cout << "Maximum accounts reached" << endl;
			}

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