#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"
#include <vector>

class Trust_Account : public Savings_Account
{
    //static int count;
    //static std::vector<int> time;
    friend std::ostream &operator<<(std::ostream os, const std::vector<Trust_Account> &account);
public:
    Trust_Account();
    Trust_Account(std::string name, double balance);
    Trust_Account(std::string name, double balance, double int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
    ~Trust_Account();

};

#endif // TRUST_ACCOUNT_H
