#include "Account.h"
#include <iomanip>

Account::Account() :Account(0, 0, 0, 0, 0, "", "", "", "", 0) {}
Account::Account(int _ID, int _wds, int _depos, double _balance, int _points, string _fname, string _lname, string _address, string _email, int _phone) {
	if (_ID >= 0)
		ID = _ID;
	else {
		cout << "Invalid ID number entered!" << endl;
		ID = 0;
	}

	if (_wds >= 0)
		wds = _wds;
	else {
		cout << "Invalid number of withdrawals entered!" << endl;
		wds = 0;
	}

	if (_depos >= 0)
		depos = _depos;
	else {
		cout << "Invalid number of deposits entered!" << endl;
		depos = 0;
	}

	balance = _balance;

	if (_points >= 0)
		rewardPoints = _points;
	else {
		cout << "Invalid number of rewards points entered!" << endl;
		rewardPoints = 0;
	}
	
	
	if (_phone >= 0) {
		accountCustomer.setAll(_fname, _lname, _address, _email, _phone);
	}
	else {
		cout << "Invalid phone number entered!" << endl;
		accountCustomer.setAll(_fname, _lname, _address, _email, 0);
	}
}

void Account::Deposit(double amount) {
	if (amount >= 0) {
	balance += amount;
	depos++;
	}
	else {
		cout << "Invalid amount entered." << endl;
	}
}
void Account::Withdraw(double amount) {
	if (amount <= balance && amount >= 0) {
		balance -= amount;
		wds++;
	}
	else {
		cout << "Invalid amount entered." << endl;
	}
}

void Account::AddPoints(int amount) {
	if (amount >= 0) {
		rewardPoints += amount;
	}
	else {
		cout << "Invalid amount entered." << endl;
	}
}
void Account::UsePoints(int amount) {
	if ((rewardPoints - amount) >= rewardPoints && amount >= 0) {
		rewardPoints -= amount;
	}
	else if(amount >= 0) {
		cout << "Invalid amount entered." << endl;
	}
	else {
		cout << "Not enough reward points" << endl;
	}
}

void Account::PrintInfo() {
	const char separator = ' ';
	const int numWidth = 20;
	cout << left << setw(numWidth) << setfill(separator) << ID;
	accountCustomer.printInfo();
	cout << left << setw(numWidth) << setfill(separator) << balance <<
		left << setw(numWidth) << setfill(separator) << rewardPoints << endl;
}