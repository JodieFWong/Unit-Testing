#pragma once
#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "account.h"

class CreditCard : public Account {
public:
	CreditCard(float = 0); // default to opening with balance of zero	
	void deposit(float);
};

#endif
// Already has stuff from account so only add stuff new
// stuff that you want!!!