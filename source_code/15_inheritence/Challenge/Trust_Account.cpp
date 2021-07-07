#include "Trust_Account.h"
#include <iostream>

//static int Trust_Account::count {0};

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate} {        
}

Trust_Account::Trust_Account(std::string name, double balance)
    : Savings_Account{name, balance, 0.00} {        
}

Trust_Account::Trust_Account()
    : Trust_Account{"Unknown Trust Account", 0.00, 0.00} {
}

Trust_Account::~Trust_Account()
{
}

bool Trust_Account::deposit(double amount) {
        if (amount > 5000)
            amount += 50.00;
        return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    double twenty_percent {amount * 0.20};
    
    if (amount > twenty_percent) {
        std::cout << "Cannot withdrawal more than 20% of the account balance" << std::endl;
        return false;
    }
    return Account::withdraw(amount);
}

friend std::ostream &operator<<(std::ostream os, const std::vector<Trust_Account> &account) {
    os << "Trust Account: " << name << 
}
