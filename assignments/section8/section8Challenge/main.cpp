/* Section 8 Challenge
 * Write a program that will take the number of cents you have and 
 * spit out the amount of dollars and cents you need to make up that amount.
 * 
 * Pseudo
 * 1. imput the numer of cents you have
 * 2. divide amount of cents by 100 cents and get the number of dollars and remainder
 * 3. take remainder from dollars, divide by quarters and take a remainder
 * 4. take remainder from quarters, divide by dimes and take a remainder
 * 5. take remainder from dimes, divide by nickels and take a remainder
 * 6. take remainder from nickels, assign to pennys
 * 7. output results
 */
 
#include <iostream>
#include <vector>

using namespace std;

int main () {
    
    // Number of cents to make up each respective form of payment.
    int const dollars {100};
    int const quarters {25};
    int const dimes {10};
    int const nickels {5};
    
    cout << "Enter how many you have in cents: ";
    int cents {};
    cin >> cents;
    
    int amount_dollars {}, amount_dollars_leftover {};
    amount_dollars = cents / dollars;
    amount_dollars_leftover = cents % dollars;
    cout << "dollars : " << amount_dollars << endl; //<< " remainder: " << amount_dollars_leftover << endl;
    
    int amount_quarters {}, amount_quarters_leftover {};
    amount_quarters = amount_dollars_leftover / quarters;
    amount_quarters_leftover = amount_dollars_leftover % quarters;
    cout << "quarters: " << amount_quarters << endl; //<< " remainder: " << amount_quarters_leftover << endl;

    int amount_dimes {}, amount_dimes_leftover {};
    amount_dimes = amount_quarters_leftover / dimes;
    amount_dimes_leftover = amount_quarters_leftover % dimes;
    cout << "dimes   : " << amount_dimes << endl; //<< " remainder: " << amount_dimes_leftover << endl;    
    
    int amount_nickels {}, amount_nickels_leftover {};
    amount_nickels = amount_dimes_leftover / nickels;
    amount_nickels_leftover = amount_dimes_leftover % nickels;
    cout << "nickels : " << amount_nickels << endl; //<< " remainder: " << amount_nickels_leftover << endl;
    
    int amount_pennys {0};
    amount_pennys = amount_nickels_leftover;
    cout << "pennys  : " << amount_pennys;
    cout << endl;
    
    cout << endl;
    return 0;
}