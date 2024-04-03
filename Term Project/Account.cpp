#include "Account.h"

Account::Account() :Account(0, 0, 0, 0, 0) {

}
Account::Account(int _ID, int _wds, int _depos, double _balance, int _points) {
	ID = _ID;
	wds = _wds;
	depos = _depos;
	balance = _balance;
	rewardPoints = _points;
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