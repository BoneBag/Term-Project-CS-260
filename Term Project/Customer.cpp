#include "Customer.h"
#include <iomanip>

void Customer::printInfo() {
	const char separator = ' ';
	const int numWidth = 20;
	cout << left << setw(numWidth) << setfill(separator) << fName <<
		left << setw(numWidth) << setfill(separator) << lName;
}

void Customer::setAll(string _fname, string _lname, string _address, string _email, int _phone) {
	fName = _fname;
	lName = _lname;
	address = _address;
	email = _email;
	phone = _phone;
}
void Customer::setFName(string _fname) {
	fName = _fname;
}
void Customer::setLName(string _lname) {
	lName = _lname;
}
void Customer::setAddress(string _address) {
	address = _address;
}
void Customer::setEmail(string _email) {
	email = _email;
}
void Customer::setPhone(int _phone) {
	if (_phone >= 0)
		phone = _phone;
	else {
		cout << "Invalid phone number entered!" << endl;
		phone = _phone;
	}
}

string Customer::getFName() {
	return fName;
}
string Customer::getLName() {
	return lName;
}
string Customer::getAddress() {
	return address;
}
string Customer::getEmail() {
	return email;
}
int Customer::getPhone() {
	return phone;
}

Customer::Customer() :Customer("", "", "", "", 0) {}
Customer::Customer(string _fname, string _lname, string _address, string _email, int _phone) {
	setAll(_fname, _lname, _address, _email, _phone);
}