#include <iostream>
#include <string>
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
#pragma endregion
	const char separator = ' ';
	const int numWidth = 20;
	int opt = 0;
	do {
		cout << header << endl << "Enter a number according to the options below: " << endl;
		cout << "0: View Checking Account Information" << endl <<
			"1: View Saving Account Information" << endl <<
			"2: Reward Points Shop" << endl <<
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
			cout << header << header << endl <<
				left << setw(numWidth) << setfill(separator) << "Account #" << 
				left << setw(numWidth) << setfill(separator) << "First Name" << 
				left << setw(numWidth) << setfill(separator) << "Last name" << 
				left << setw(numWidth) << setfill(separator) << "Balance" << 
				left << setw(numWidth) << setfill(separator) << "Current Rewards Points" << endl
				<< header << header << endl;
			//Account information goes here
			cout << header << header << endl;
			break;
		case 1:
			cout << header << header << endl <<
				left << setw(numWidth) << setfill(separator) << "Account #" <<
				left << setw(numWidth) << setfill(separator) << "First Name" <<
				left << setw(numWidth) << setfill(separator) << "Last name" <<
				left << setw(numWidth) << setfill(separator) << "Balance" <<
				left << setw(numWidth) << setfill(separator) << "Current Rewards Points" << endl
				<< header << header << endl;
			//Account information goes here
			cout << header << header << endl;
			break;

		case 2:
			int option;
			cout << space << "Welcome to the Reward Points Shop!" << endl;
			cout << header << endl;
			cout << "--Please choose how you would like to spend your rewards--" << endl;
			cout << endl;
			cout << left << setw(numWidth) << setfill(separator) << "1: Travel" <<
				left << setw(numWidth) << setfill(separator) << "2: Gift Cards" <<
				left << setw(numWidth) << setfill(separator) << "3: Merchandise" << endl;
			cin >> option;
			system("CLS");

			if (option == 1)
			{
				cout << space << "Select a travel option " << endl;
				cout << left << setw(numWidth) << setfill(separator) << " 1:Book a hotel"
					<< left << setw(numWidth) << setfill(separator) << " 2:Airfare" <<
					left << setw(numWidth) << setfill(separator) << " 3: Book a cruise" << endl;

				cin >> opt;
				switch (opt)
				{

				case 1:
					cout << header << endl;
					cout << "Use Rewards Points to book a hotel anywhere" << endl;
					cout << "1. Holiday Inn Express -1,000 points-" << endl << 
						"2. Hilton Grand Vacations -1,500 points- " << endl << 
						"3. Hyatt Regency -2,000 points- " << endl;
					cout << "Rewards can only be used on the listed hotels affiliated with Banking United" << endl;

					cin >> opt;

					break;


				}

			}

			if (option == 2)
			{
				cout << space << "Select a Gift Card" << endl;
				cout << left << setw(numWidth) << setfill(separator) << " 1: $25 Banking United Gift Card" <<
					left << setw(numWidth) << setfill(separator) << " 2: $50 Banking United Gift Card" <<
					left << setw(numWidth) << setfill(separator) << " 3: $100 Banking United Gift Card" << endl;
				cin >> opt;

				switch (opt)
				{
				case 1:


					break;

				case 2:



					break;


				case 3:



					break;

				}

			
			}

			if (option == 3)
			{
				cout << space << "Merchandise Shop" << endl; 
				cout << left << setw(numWidth) << setfill(separator) << " 1: BU Hoodie -100 points-" <<
					left << setw(numWidth) << setfill(separator) << " 2: BU T-Shirt -50 points-" <<
					left << setw(numWidth) << setfill(separator) << " 3: BU Thermos cup -40 points-" << endl;
				cin >> opt;

				switch (opt)
				{
				case 1: 

					break;


				case 2:

					break;

				case 3:

					break;

				}


			}

			break;
		case 3:
			



			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:

			break;
		case 8:

			break;
		default:
				break;
		}
	} while (opt != 9);
}