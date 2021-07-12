#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"
#include <vector>

class Trust_Account : public Savings_Account
{
    int count;
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
public:
    Trust_Account();
    Trust_Account(std::string name, double balance);
    Trust_Account(std::string name, double balance, double int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
    ~Trust_Account();

};

#endif // TRUST_ACCOUNT_H
