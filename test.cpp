#include "pch.h"
#include <gtest/gtest.h>
#include "C:\Users\jodyf\Documents\Programming\Visual Studio My Reboot\Bank Alpha Build 1.1 With Command Line UI\Bank\account.h"
#include "C:\Users\jodyf\Documents\Programming\Visual Studio My Reboot\Bank Alpha Build 1.1 With Command Line UI\Bank\atm.h"
#include "C:\Users\jodyf\Documents\Programming\Visual Studio My Reboot\Bank Alpha Build 1.1 With Command Line UI\Bank\credit.h"
#include "C:\Users\jodyf\Documents\Programming\Visual Studio My Reboot\Bank Alpha Build 1.1 With Command Line UI\Bank\imp_account.cpp"
#include "C:\Users\jodyf\Documents\Programming\Visual Studio My Reboot\Bank Alpha Build 1.1 With Command Line UI\Bank\imp_atm.cpp"
#include "C:\Users\jodyf\Documents\Programming\Visual Studio My Reboot\Bank Alpha Build 1.1 With Command Line UI\Bank\imp_credit.cpp"

#include <iostream>
#include <cstdio>
#include <conio.h>
#include <fstream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

// Expecting a balance of 0
// Expecting the EXPECT_TRUE to verify true
TEST(GetBalanceTest1, ZeroBalance) {

	Account testAccount1;
		
	EXPECT_EQ(0, testAccount1.getBalance());
	EXPECT_TRUE(true);
}

// Expecting a balance of -100
// Expecting the EXPECT_FALSE to verify false
TEST(GetBalanceTest1, ExpectNotZero) {

	Account testAccount2;

	EXPECT_EQ(-100, testAccount2.getBalance());
	EXPECT_FALSE( false );
}

// Expecting a balance of -200
// Expecting the EXPECT_TRUE to NOT verify true
TEST(GetBalanceTest3, NotExpectNotZero) {

	Account testAccount3;

	EXPECT_EQ(-200, testAccount3.getBalance());
	EXPECT_TRUE(testAccount3.getBalance()==-200) << "Test failed as expected.";	// Parse what you are expecting the output to be
}


// Basic deposit test with large figure
// Expect balance = 1200
// Expect EXPECT_TRUE to verify true
TEST(DepositTest2, DepositPositiveAmount1) {
	
	Account testAccount;
	testAccount.deposit(1200);

	EXPECT_EQ(1200, testAccount.getBalance());
	EXPECT_TRUE(testAccount.getBalance() == 1200);
}

// Basic deposit test with large figure then withdraw a smaller amount
// Expect balance = 800
// Expect EXPECT_TRUE to verify true
TEST(DepositTest1, DepositWithdrawPositiveAmount1) {

	cout << "*** Basic deposit test with large figure then withdraw a smaller amount ***" << endl;
	cout << "*** Expect balance = 800 ***" << endl;
	cout << "*** Expect EXPECT_TRUE to verify true ***" << endl;

	Account testAccount;
	testAccount.deposit(1200);

	EXPECT_EQ(1200, testAccount.getBalance());
	EXPECT_TRUE(testAccount.getBalance() == 1200);

	cout << testAccount.getBalance() << endl;
	testAccount.withdraw(400);


	EXPECT_EQ(800, testAccount.getBalance());
	EXPECT_TRUE(testAccount.getBalance() == 800);
}


// Basic deposit test with large figure then withdraw a smaller amount
// Expect balance = 800
// Expect EXPECT_TRUE to verify true
TEST(DepositTest1, DepositWithdrawPositiveAmount2) {

	cout << "*** Basic deposit test with large figure then withdraw a smaller amount ***" << endl;
	cout << "*** Expect balance = 800 ***" << endl;
	cout << "*** Expect EXPECT_TRUE to verify true ***" << endl;

	CurrentAccount testCurrent;
	testCurrent.deposit(1200);

	EXPECT_EQ(1200, testCurrent.getBalance());
	EXPECT_TRUE(testCurrent.getBalance() == 1200);

	cout << testCurrent.getBalance() << endl;
	testCurrent.withdraw(400);


	EXPECT_EQ(800, testCurrent.getBalance());
	EXPECT_TRUE(testCurrent.getBalance() == 800);
}

TEST(AccountATMTest1, AccountATMBalanceCheck) {

	CurrentAccount testCurrentAccount;

	
	EXPECT_EQ(0, testCurrentAccount.getBalance());
	EXPECT_TRUE(true);
}

//TEST(AccountATMTest1, ATMtoCreditTransfer1) {
//
//	CurrentAccount testCurrentAccount;
//	CreditCard testCreditCard;
//
//	testCurrentAccount.deposit(200);
//	testCreditCard.withdraw(500);
//	testCreditCard.deposit(100);
//
//	EXPECT_EQ(0, testCreditCard.getBalance());
//	EXPECT_TRUE(true);
//
//
//}

//CreditCard testCreditCard;
//
//EXPECT_EQ(0, testCreditCard.getBalance());
//EXPECT_TRUE(true);