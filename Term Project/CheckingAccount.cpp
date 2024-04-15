#include "CheckingAccount.h"



CheckingAccount:: CheckingAccount() : Account()
{
	overDraftLimit = 0;

}


CheckingAccount:: CheckingAccount(int _ID, string _fname, string _lname, string _address, string _email, string _phone, double _balance, int _wds, int _depos, int _pts, double _overDL) : Account(_ID, _wds, _depos, _balance, _pts, _fname, _lname, _address, _email, _phone)
{
	overDraftLimit = _overDL;

}


void::CheckingAccount:: Withdraw(double amount, double balance)
{

	if (amount <= balance)
	{
		balance -= amount;
		Account::Withdraw(amount);
		amount++;
	}

	if (amount >= balance)
	{

		if (balance - amount <= overDraftLimit)
		{
			balance -= amount + 20;
			Account::Withdraw(amount);
			amount++;
		}

		else if (balance - amount >= overDraftLimit)
		{
			cout << "Not enough to withdraw" << endl;

		}
	}

}

void CheckingAccount::newChecking(int _ID, string _fname, string _lname, string _address, string _email, string _phone, double _balance, int _wds, int _depos, int _pts, double _overDL) {
	overDraftLimit = _overDL;
	Account::setAll(_ID, _wds, _depos, _balance, _pts, _fname, _lname, _address, _email, _phone);
}
