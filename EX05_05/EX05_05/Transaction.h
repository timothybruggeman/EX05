#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include "Date.h"
//#include "Account.h"
#include <string>
#include <ctime>

class Transaction {
private:
	Date date;
	char type;
	double amount;
	double balance;
	std::string description;
	int historyNumber = 0;
public:
/*	Transaction() {
		date = 0;
		type = '0';
		amount = 0;
		balance = 0;
		description = "";
	}*/
	Transaction(char t, double a, double b, std::string d) {
		date = Date(time(0));
		type = t;
		amount = a;
		balance = b;
		description = d;
	}
	double getAmount() {
		return amount;
	}
};

#endif