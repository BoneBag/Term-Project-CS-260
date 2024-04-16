#pragma once
#ifndef _SAVINGACC_
#define _SAVINGACC_
#include <iostream> 
#include <string> 
#include "Account.h"
using namespace std;


class SavingAccount : public Account
{
	double interestRate;


public: 

	SavingAccount();
	SavingAccount(int _ID, string _fname, string _lname, string _address, string _email, string _phone, double _balance, int _wds, int _depos, int _pts, double _interestR);


	void payInterest(double balance, double amount);

	void newSaving(int _ID, string _fname, string _lname, string _address, string _email, string _phone, double _balance, int _wds, int _depos, int _pts, double _interestR);
};
#endif