#pragma once
#ifndef _ACCOUNT_
#define _ACCOUNT_
#include <iostream>
#include <string>
#include "Customer.h"
using namespace std;
class Account
{
	int ID, wds, depos; //Account ID, withdrawals, and deposits
	double balance;
	Customer accountCustomer;
public:
	Account();
	Account(int _ID, int _wds, int _depos, double _balance);

	void Deposit(double amount);
	void Withdraw(double amount);
	void PrintInfo();
};

#endif // !_ACCOUNT_

