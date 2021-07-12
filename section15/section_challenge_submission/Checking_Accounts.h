#ifndef _CHECKING_ACCOUNTS_H_
#define _CHECKING_ACCOUNTS_H_
#include "Account.h"

class Checking_Accounts : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Accounts &account);
    double withdrawal_fee;
public:
    Checking_Accounts(std::string name, double balance, double withdrawal_fee);
    Checking_Accounts(std::string name, double balance);
    Checking_Accounts();
    bool withdraw(double amount);
    // inheriting deposit from "Account.h" class
    ~Checking_Accounts();

};

#endif // _CHECKING_ACCOUNTS_H_
