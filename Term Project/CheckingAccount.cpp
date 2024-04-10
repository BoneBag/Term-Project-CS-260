#include "CheckingAccount.h"



CheckingAccount:: CheckingAccount() : Account()
{
	overDraftLimit = 0;

}


CheckingAccount:: CheckingAccount(int _ID, string _fname, string _lname, string _address, string _email, int _phone, double _balance, int _wds, int _depos, double _overDL) : Account(_ID, _wds, _depos, _balance)
{
	overDraftLimit = _overDL;

}


void::CheckingAccount:: Withdraw(double amount, double balance)
{

	if (amount <= balance)
	{
		balance -= amount;
		Account::Withdraw;
		amount++;
	}

	if (amount >= balance)
	{

		if (balance - amount <= overDraftLimit)
		{
			balance -= amount + 20;
			Account::Withdraw;
			amount++;
		}

		else if (balance - amount >= overDraftLimit)
		{
			cout << "Not enough to withdraw" << endl;

		}
	}

}
