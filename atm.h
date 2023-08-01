#pragma once
#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include "account.h"

class CurrentAccount : public Account {
public:
	CurrentAccount(float = 0); // default to opening with balance of zero
	void atmWithdraw(float);
	void atmDeposit(float);
	void atmTrans(float);

};

#endif