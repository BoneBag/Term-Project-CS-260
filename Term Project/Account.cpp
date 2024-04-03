#include "Account.h"

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
	rewardPoints = _points;

	accountCustomer.setAll(_fname, _lname, _address, _email, _phone);
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
void Account::PrintInfo() {
	accountCustomer.printInfo();
	cout << "ID: " << ID << ", Withdrawals: " << wds << ", Deposits: " << depos << " Current Balance: " << balance << endl;
}