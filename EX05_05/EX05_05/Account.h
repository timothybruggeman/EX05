#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "Transaction.h"



class Account {
private:
	double annualInterestRate;
	double balance;
	int id;
	std::string name;
	std::vector<Transaction> transactions;
public:
	Account() {
		annualInterestRate = 0;
		balance = 0;
		id = 0;
		name = "";
	}
	Account(double aIR, double b, int i, std::string n) {
		annualInterestRate = aIR;
		balance = b;
		id = i;
		name = n;
	}
	std::string getName() {
		return name;
	}
	double getInterestRate() {
		return annualInterestRate;
	}
	double getBalance() {
		return balance;
	}
	void changeBalance(double money) {
		balance += money;
	}
	void deposit(Transaction t) {
		changeBalance(t.getAmount());
		transactions.push_back(t);
	}
	void withdraw(Transaction t) {
		changeBalance(-t.getAmount());
		transactions.push_back(t);
	}
	std::vector<Transaction> getTransactions() {
		return transactions;
	}
};

#endif
