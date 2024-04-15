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
	int rewardPoints;
public:
	Account();
	Account(int _ID, int _wds, int _depos, double _balance, int _points, string _fname, string _lname, string _address, string _email, int _phone);

	void Deposit(double amount);
	void Withdraw(double amount);
	void AddPoints(int amount);
	void UsePoints(int amount);
	int getID();
	void PrintInfo();

	void setAll(int _ID, int _wds, int _depos, double _balance, int _points, string _fname, string _lname, string _address, string _email, int _phone);
};

#endif // !_ACCOUNT_

