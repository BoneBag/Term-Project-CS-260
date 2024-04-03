#pragma once
#ifndef _CHECKINGACC_
#define _CHECKINGACC_
#include <iostream>
#include <string> 
#include "Account.h"
using namespace std;

class CheckingAccount : public Account
{
	double overDraftLimit; 

public:


	CheckingAccount();
	CheckingAccount(int _ID, string _fname, string _lname, string _address, string _email, int _phone, double _balance, int _wds, int _depos, double _overDL);

	void Withdraw(double amount, double balance);

};













#endif //!Checkingacc