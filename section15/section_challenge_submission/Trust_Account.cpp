#include "Trust_Account.h"
#include <iostream>


Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}, count{0} {        
}

Trust_Account::Trust_Account(std::string name, double balance)
    : Trust_Account{name, balance, 0.00} {        
}

Trust_Account::Trust_Account()
    : Trust_Account{"Unknown Trust Account", 0.00, 0.00} {
}

Trust_Account::~Trust_Account()
{
}

bool Trust_Account::deposit(double amount) {
        Savings_Account::deposit(amount);
        if (amount > 5000)
            Account::deposit(50.00);
        return true;
}

bool Trust_Account::withdraw(double amount) {
    double twenty_percent {balance * 0.20};
    
    if(count >= 3) {
        return false;
    } else if (amount > twenty_percent) {
        std::cout << "ERROR: Cannot withdrawal more than 20% of the account balance" << std::endl;
        return false;
    } else {
        count += 1;
        return Account::withdraw(amount);
    }
    
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ", " << account.balance << ", " << account.int_rate << "%, Num of Withdrawal's This Year: " << account.count << "]";
    return os;
}
