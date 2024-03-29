#include "Account.h"

Account::Account() :Account(0, 0, 0, 0) {

}
Account::Account(int _ID, int _wds, int _depos, double _balance) {
	ID = _ID;
	wds = _wds;
	depos = _depos;
	balance = _balance;
}

void Account::Deposit(double amount) {
	balance += amount;
	depos++;
}
void Account::Withdraw(double amount) {
	if (amount <= balance) {
		balance -= amount;
		wds++;
	}
}
void Account::PrintInfo() {
	accountCustomer.printInfo();
	cout << "ID: " << ID << ", Withdrawals: " << wds << ", Deposits: " << depos << " Current Balance: " << balance << endl;
}