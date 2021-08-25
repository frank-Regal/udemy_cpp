#include "Checking_Accounts.h"


// All Args Constructor
Checking_Accounts::Checking_Accounts(std::string name, double balance, double withdrawal_fee) 
    : Account{name, balance}, withdrawal_fee{withdrawal_fee} {
}

// Overloaded Two Args Constructor
Checking_Accounts::Checking_Accounts(std::string name, double balance)
    : Checking_Accounts{name, balance, 1.50} {
}

// Overloaded No Args Constructor
Checking_Accounts::Checking_Accounts()
    : Checking_Accounts{"Unknown Checking Account", 0.00, 1.50} {
}

// Destructor
Checking_Accounts::~Checking_Accounts() {
}

bool Checking_Accounts::withdraw(double amount) {
    if ((balance - amount) < 0) {
        return false;
    }
    else {
        amount -= withdrawal_fee;
        return Account::withdraw(amount);
    }
}

std::ostream &operator<<(std::ostream &os, const Checking_Accounts &account) {
    os << "[Checking Account: " << account.name << ": " << account.balance << "]";
    return os;
}

