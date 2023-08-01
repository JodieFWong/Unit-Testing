#include "Account.h"

int Account::count = 0; //initalise static for this class

Account::Account(float amount)
{
	balance = amount;
	count++;
	accountNo = count; // unique account id
}
void Account::deposit(float amount)
{
	balance += amount;
}
void Account::withdraw(float amount)
{
	balance -= amount;
}
