#include <iostream>
#include <string>

using namespace std;

int main () {
    
    string user_input {};
    cout << "Please input a string with no spaces: ";
    getline(cin, user_input);
    
    for (size_t i {0}; i < user_input.length(); ++i) {
        
        for (size_t j {user_input.length()-(i+1)}; j > 0;--j) {
            cout << " ";
        }
        
        for (size_t k {0}; k < i; ++k) {
            cout << user_input[k];
        }
        cout << user_input[i];
        
        if (i > 0) {
            for (size_t a {i}; a > 0; --a) {
                cout << user_input[a-1];
            }
        }
        cout << endl;
    }
    
    cout << endl;
    return 0;
}