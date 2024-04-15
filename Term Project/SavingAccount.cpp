#include "SavingAccount.h"



SavingAccount::SavingAccount() : Account()
{
	interestRate = 0;

}


SavingAccount::SavingAccount(int _ID, string _fname, string _lname, string _address, string _email, int _phone, double _balance, int _wds, int _depos, int _pts, double _interestR) : Account(_ID, _wds, _depos, _balance, _pts, _fname, _lname, _address, _email, _phone)
{
	interestRate = _interestR;

}


void::SavingAccount:: payInterest(double balance, double amount)
{
	amount = balance* interestRate;
	 
	balance = balance + amount;

}

void SavingAccount::newSaving(int _ID, string _fname, string _lname, string _address, string _email, int _phone, double _balance, int _wds, int _depos, int _pts, double _interestR){
	interestRate = _interestR;
	Account::setAll(_ID, _wds, _depos, _balance, _pts, _fname, _lname, _address, _email, _phone);
}











