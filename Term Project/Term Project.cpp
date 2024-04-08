#include <iostream>
#include <string>
#include <iomanip>
#include "Customer.h"
#include "Account.h"
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
				left << setw(numWidth) << setfill(separator) << "Account #" << 
				left << setw(numWidth) << setfill(separator) << "First Name" << 
				left << setw(numWidth) << setfill(separator) << "Last name" << 
				left << setw(numWidth) << setfill(separator) << "Balance" << 
				left << setw(numWidth) << setfill(separator) << "Current Reward Points" << endl
				<< header << header << endl;
			//Account information goes here
			cout << header << header << endl;

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 1:
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 2:
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 3:
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 4:
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 5:
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 6:
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 7:
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		case 8:
			// Functionality goes here

			do {
				cout << endl << "Enter 1 when you're ready to continue ";
				cin >> cont;
			} while (cont != 1);
			system("CLS");
			break;
		default:
			cout << "Goodbye!" << endl;
				break;
		}
	} while (opt < 9);
}