#include "stdafx.h"
#include <iostream>

using namespace std;
void main() {
	int accOption;
	int amount;
	char option;
	cout << "Press 1 for Current Account " << endl;
	cout << "Press 2 for Savings Account " << endl;
	cin >> accOption;
	if (accOption == 1) {
		cout << "Enter some amount in your account" << endl;
		cin >> amount;
		if (amount >= 2000) {
			cout << "amount has been deposited"<<endl;
			cout << "press a for Deposit the money and b the Widraw the money";
			cin >> option;
			if (option == 'a') {
				cout << "depositing";
			}else if (option == 'b') {
				cout << "widrawing";
			}
		}
		else {
			cout << "please deposit 2000 or more to open an account" << endl;
		}
	}else if (accOption == 2) {
		cout << "Enter some amount in your account" << endl;
		if (amount >= 5000) {
			cout << "amount has been deposited"<<endl;
			cout << "press a for Deposit the money and b the Widraw the money";
			cin >> option;
			if (option == 'a') {
				cout << "depositing";
			}
			else if (option == 'b') {
				cout << "widrawing";
			}
		}
		else {
			cout << "please deposit 5000 or more to open an account"<<endl;
		}
	}
}
