#pragma once
#ifndef _CUSTOMER_
#define _CUSTOMER_
#include <iostream>
#include <string>
using namespace std;
class Customer
{
	string fName, lName, address, email;
	string phone;
public:
	void printInfo();

	void setAll(string _fname, string _lname, string _address, string _email, string _phone);
	void setFName(string _fname);
	void setLName(string _lname);
	void setAddress(string _address);
	void setEmail(string _email);
	void setPhone(string _phone);
	
	string getFName();
	string getLName();
	string getAddress();
	string getEmail();
	string getPhone();

	Customer();
	Customer(string _fname, string _lname, string _address, string _email, string _phone);
};

#endif // !_CUSTOMER_