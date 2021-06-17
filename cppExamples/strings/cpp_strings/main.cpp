#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; //Apple
    string s6 {s1, 0, 3}; // App
    string s7 (10, 'X'); // XXXXXXXXXX
    
    cout << s0 << endl;
    cout << s0.length() << endl;
    
    s1 = "Watermelon";
    s2 = s1;
    s3 = "Frank";
    s3[0] = 'C';
    s3.at(0) = 'P';
    
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;
    
    // Looping through strings
    cout << endl;
    for (size_t i {0}; i < s1.length(); ++i) {
        cout << s1.at(i);
    }

    // Range based for loop
    cout << endl;
    for (char c: s1){
        cout << c;
    }
    
    // Substring
    cout << endl;
    cout << s1.substr(0,4);

    // Erase
    cout << endl;
    cout << s1.erase(0,5);
    
    // Getline
    cout << endl;
    string full_name {};
    cout << "Enter your full name: ";
    getline(cin, full_name);
    
    cout << endl;
    return 0;
}