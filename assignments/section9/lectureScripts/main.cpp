#include <iostream>

using namespace std;

int main () {
   
    int const min {10};
    int const max {100};
    cout << "Please enter an integer between " << min << " and " << max << ": ";
    
    int input {};
    cin >> input;
    
    if (input >= min) {
        cout << "\n========= If statement ONE ============" << endl;
        cout << input << " is greater than or equal to " << min << endl;
        
        int diff {input - min};
        cout << "The number you entered is " << diff << " greater than " << min << endl;
        
    }

    if (input <= max) {
        cout << "\n========= If statement TWO ============" << endl;
        cout << input << " is less than or equal to " << max << endl;
        
        int diff {max - input};
        cout << "The number you entered is " << diff << " less than " << max << endl;
    }
    
    if (input >= min && input <= max) {
        cout << "\n========= If statement THREE ============" << endl;
        cout << input << " is in range" << endl;
        cout << "This means statements one and two will display" << endl;
    }
    
    if (input == min || input == max) {
        cout << "\n========= If statement FOUR ============" << endl;
        cout << input << " right on a boundary" << endl;
        cout << "All four statements should have displayed above" << endl;
    }
    
    cout << endl;
    return 0;
}