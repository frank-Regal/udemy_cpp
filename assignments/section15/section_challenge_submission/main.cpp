// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Accounts.h"
#include "Trust_Account.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    cout << "*****************************************************************" << endl;
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    cout << "*****************************************************************" << endl;
    // Checking Check
    
    vector<Checking_Accounts> checking_acc;
    checking_acc.push_back(Checking_Accounts {});
    checking_acc.push_back(Checking_Accounts{"Frank", 4000});
    checking_acc.push_back(Checking_Accounts{"Osiris", 5000});
    checking_acc.push_back(Checking_Accounts{"Olivia", 20});
    
    display(checking_acc);
    deposit(checking_acc, 100);
    withdraw(checking_acc, 500);
    
    cout << "*****************************************************************" << endl;
    // Trust Account Check
    
    vector<Trust_Account> trust_acc;
    trust_acc.push_back(Trust_Account {});
    trust_acc.push_back(Trust_Account{"A", 0});
    trust_acc.push_back(Trust_Account{"B", 5000, 2.50});
    trust_acc.push_back(Trust_Account{"C", 10000, 5.00});
    
    display(trust_acc);
    deposit(trust_acc, 5000);
    // 1
    withdraw(trust_acc, 1200);
    // 2
    withdraw(trust_acc, 1200);
    // 3
    withdraw(trust_acc, 1200);
    // 4
    withdraw(trust_acc, 1200);
    // 5
    withdraw(trust_acc, 1200);
    

    return 0;
}

