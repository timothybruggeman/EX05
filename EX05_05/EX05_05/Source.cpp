//12.25 (New Acount class) An Account class was specified in Programming
//Exercise 9.3. Modify the Account class as follows:
//Assume that the interest rate is the same for all accounts. So, the
//annualInterestRate property should be static.
//Add a new data field name of the string type to store the name of the
//customer.
//Add a new constructor that constructs an account with the specified name, id,
//and balance.
//Add a new data field named transactions whose type is
//vector<Transaction> that stores the transaction for the accounts. Each
//transaction is an instance of the Transaction class. The Transaction class
//is defined as shwon in Figure 12.4.
//Modify the withdraw and deposit functions to add a transaction to the 
//transactions vector.
//All other properties and functions are the same as in Programming exercise 9.3.

#include <iostream>
#include <string>

#include "Date.h"
//#include "Transaction.h"
#include "Account.h"

using namespace std;

void printAccountSummary(Account GeorgesAccount);

void main() {
	Account GeorgesAccount(1.5, 1000, 1122, "George");
		Transaction t1('d', 30, 0, "Monday paycheck");
		Transaction t2('d', 40, 0, "Tuesday paycheck");
		Transaction t3('d', 50, 0, "Wednesday paycheck");
		Transaction t4('w', 5, 0, "Balloon Animal");
		Transaction t5('w', 4, 0, "Squirt Guns");
		Transaction t6('w', 2, 0, "Tic-Tacs");
		GeorgesAccount.deposit(t1);
		GeorgesAccount.deposit(t2);
		GeorgesAccount.deposit(t3);
		GeorgesAccount.withdraw(t4);
		GeorgesAccount.withdraw(t5);
		GeorgesAccount.withdraw(t6);
		printAccountSummary(GeorgesAccount);
	}

	void printAccountSummary(Account GeorgesAccount) {
		cout << "Account holder: " << GeorgesAccount.getName() << endl;
		cout << "Interest rate: " << GeorgesAccount.getInterestRate() << endl;
		cout << "Balance: " << GeorgesAccount.getBalance() << endl;
		cout << "Deposit and withdraw history: ";
		for (int i = 0; i < 6; i++) {
			cout << GeorgesAccount.getTransactions()[i].getAmount() << ", ";
		}
		int poop;
		cin >> poop;
	}

