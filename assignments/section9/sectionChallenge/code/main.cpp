/* Section 9 Challenge - cpp udemy class
 * Author: Frank Regal
 * Date: 2021.06.09
 * 
 * pseudo code:
 * 
 * - do while loop
 *      - print menu in do
 * 
 * - if statement
 *      - put functionality of each case within the switch case
 * 
 */

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main () {
    
    vector <int> user_vector {};
    char select {};
    int int_addition {};
    
    do {
        // Print Menu
        cout << "=========================" << endl;
        cout << "P - Print Numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the number" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nPlease enter a selection: ";
        cin >> select;
        
        // Do things based on input selection
        
        if (select == 'p' || select == 'P') {
            if (user_vector.size() == 0) {
                cout << "\n[] - List is Empty" << endl;
            } 
            else {
                cout << "[ ";
                for (auto i: user_vector) {
                    cout << i << " ";
                }
                cout << "]" << endl;
            }
        } else if (select == 'a' || select == 'A') {
            cout << "Please enter integer: ";
            cin >> int_addition;
            user_vector.push_back(int_addition);
            cout << "\n" << int_addition << " was added!" << endl;
        } else if (select == 'm' || select == 'M') {
            if (user_vector.size() == 0) 
                cout << "Unable to calculate the mean - no data" << endl;
            else {
                 double sum{0}, average {0};
                for (auto i: user_vector) {
                     sum += i;
                 }
                 average = sum / user_vector.size();
                 cout << fixed << setprecision(2);
                 cout << "Average of the current vector: " << average << endl;
             }
        } else if (select == 's' || select == 'S') {
            if (user_vector.size() == 0) 
                cout << "Unable to calculate - no data" << endl;
            else {
                int smallest_int  {user_vector[0]};
                for (auto i: user_vector) {
                     if (i < smallest_int)
                         smallest_int = i;
                }
                cout << "Smallest Integer: " << smallest_int << endl;
            }
        } else if (select == 'l' || select == 'L') {
            if (user_vector.size() == 0) 
                cout << "Unable to calculate - no data" << endl;
            else {
                int largest_int  {user_vector[0]};
                for (auto i: user_vector) {
                     if (i > largest_int)
                         largest_int = i;
                }
                cout << "Largest Integer: " << largest_int << endl;
            }
        } else if (select == 'q' || select == 'Q') {
            cout << "\nGoodbye..." << endl;
        } else {
            cout << "\n*** INVALID ENTRY ****\n\nTry Again...\n ";
        }
        
        cout << endl;
        
    } while ( select != 'q' && select != 'Q');

    cout << endl;
    return 0;
}