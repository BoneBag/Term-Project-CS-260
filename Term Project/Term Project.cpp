#include <iostream>
#include <string>
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
#pragma endregion
	int opt = 0;
	do {
		cout << header << endl << "Enter a number according to the options below: " << endl;
		cout << "0: View Checking Account Information" << endl <<
			"1: View Saving Account Information" << endl <<
			"2: Create New Checking Account" << endl <<
			"3: Create New Saving Account" << endl <<
			"4: Modify Existing Checking Account" << endl <<
			"5: Modify Existing Saving Account" << endl <<
			"6: Delete Existing Checking Account" << endl <<
			"7: Delete Existing Saving Account" << endl <<
			"8: Exit" << endl << header << endl;
		cin >> opt;
	} while (opt != 8);
}