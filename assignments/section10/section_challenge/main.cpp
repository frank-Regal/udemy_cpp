#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

/* Prompt user to enter a secret code
 *  Loop through string 
 *  if letters, replace
 *  if not letters, keep
 * decipher code by looping through key 
 *  if letters, replace
 *  if not letters, keep */

int main () {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    
    
    char secretMsg [60] {};
    cout << "Please enter a secret code: ";
    cin.getline(secretMsg, 60);
    
    char encoded_msg [60] {};
    strcpy(encoded_msg, secretMsg);
    
    cout << "\nEncoding ..." << endl; 
    
    for (size_t i {0}; i < strlen(secretMsg); ++i) {
        if (isalpha(secretMsg[i]) != 0)
            encoded_msg[i]= key.at(alphabet.find(secretMsg[i]));
        else
            encoded_msg[i] = secretMsg[i];
    }
    
    cout << "\n" << encoded_msg << endl;
    cout << "\nDecoding ..." << endl;
    
    char decoded_msg [60] {};
    strcpy(decoded_msg, encoded_msg);
    
    for (size_t k {0}; k < strlen(encoded_msg); ++k) {
        if (isalpha(encoded_msg[k]) != 0)
            decoded_msg[k] = alphabet.at(key.find(encoded_msg[k]));
        else
            decoded_msg[k] = encoded_msg[k];
    }
    
    cout << "\n" << decoded_msg << endl;
    
    cout << endl;
    return 0;
}
