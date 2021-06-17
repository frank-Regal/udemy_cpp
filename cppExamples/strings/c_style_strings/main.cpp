#include <iostream>
#include <iomanip>
#include <cctype> // Library containing 
#include <cstring>  

/* 
 * isalpha(c) - true if c is a letter
 * isalnum(c) - true if c is a letter of digit
 * isdigit(c) - true if c is a digit
 * islower(c) - true if c is lowercase letter 
 * isprint(c) - true if c is a printable character
 * ispunct (c) - true if c is a punctiation character
 * isupper(c) - true if c is an uppercase letter
 * isspace(c) - true if c is whitespace
 * 
 * tolower(c) - returns lowercase of c
 * toupper(c) - returns uppercase of c
 */
using namespace std;
int main () {
    
//    char first_name [20] {};
//    char last_name [20] {};
//    char full_name[50] {};
//    char temp [50] {};
    
    //cout << first_name;
    
//    cout << "Please enter your first name: ";
//    cin >> first_name;
//    
//    cout << "Please enter your last name: ";
//    cin >> last_name;
//    
//    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters." << endl;
//    cout << "Your last name, " << last_name << " has " << strlen(last_name) << " characters." << endl;
//    
//    strcpy(full_name, first_name); // String Copy
//    strcat(full_name, " "); // String Concatenate
//    strcat(full_name, last_name);
//    
//    cout << "Full Name: " << full_name << endl;
    
//    cout << "Please enter your full name: ";
//    cin.getline(full_name, 50);
//    cout << "Full name: " << full_name << endl;
//    
//    strcpy(temp, full_name);
//    
//    for (size_t i {0}; i < strlen(full_name); ++i) {
//        if (isalpha(full_name[i])) {
//            full_name[i] = toupper(full_name[i]);
//        }
//    }
//    
//    cout << "Your full name is " << full_name << endl;
//    
//    cout << "-----------" << endl;
//    
//    if (strcmp(temp, full_name) ==0){
//        cout << temp << " and " << full_name << " are the same." << endl;
//    } else {
//        cout << temp << " and " << full_name << " are not the same." << endl;
//    }
//    
    char first_name [20] {"Frank"};
    char last_name [20] {"Regal"};
    char whole_name [60] {};
    
//    strcpy(first_name, "Bjarne");
//    strcpy(last_name, "Regal");
    
    size_t first_name_length {strlen(first_name)};
    size_t last_name_length {strlen(last_name)};
    
    strcpy(whole_name, first_name);
    strcat(whole_name, " ");
    strcat(whole_name, last_name);
    
    size_t whole_name_length {strlen(whole_name)};
    
        cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
    
    
    
    return 0;
    cout << endl;
}