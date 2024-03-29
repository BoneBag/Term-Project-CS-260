#pragma once
#ifndef _CUSTOMER_
#define _CUSTOMER_
#include <iostream>
#include <string>
using namespace std;
class Customer
{
	string fName, lName, address, email;
	int phone;
public:
	void printInfo();

	void setFName(string _fname);
	void setLName(string _lname);
	void setAddress(string _address);
	void setEmail(string _email);
	void setPhone(int _phone);

	string getFName();
	string getLName();
	string getAddress();
	string getEmail();
	int getPhone();

	Customer();
	Customer(string _fname, string _lname, string _address, string _email, int _phone);
};

#endif // !_CUSTOMER_