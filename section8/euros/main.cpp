// Convert EUROS to USD

#include <iostream>

using namespace std;

int main () {
    
    // 1 Euro = 1.19 USD from google
    double const usd_per_eur {1.19};
    
    cout << "Welcome to the EUR to USD Converter" << endl;
    cout << "Enter the value in Euros: ";
    
    double num_euros {};
    cin >> num_euros;
    
    double dollars {};
    dollars = num_euros * usd_per_eur;
    
    cout << num_euros << " EUR is equivalent to " << dollars << " USD" << endl;
    
    cout << endl;
    return 0;
}
