#pragma once
//Basic account class ATM and credit card classes will inherit from this
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
	Account(float = 0); // default to opening with balance of zero
	float getBalance() const { return balance; } // const is added so that when called for credit object it won't also affect account object
	float getAccountNo() { return accountNo; }
	void deposit(float);
	void withdraw(float);

protected:
	float balance;
private:
	int accountNo;
	static int count; // number of accounts generated

};

#endif

