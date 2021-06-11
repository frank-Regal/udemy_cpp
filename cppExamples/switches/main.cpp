// Frank Regal
// udemy cpp class
// example switch code


/* Switches are usually used with enum type variables */

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
/* EXAMPLE ONE */
//
//    char letter_grade {};
//    
//    cout << "Enter letter grade: ";
//    cin >> letter_grade;
//    
//    switch (letter_grade) {
//        case 'a': 
//        case 'A': {
//            cout << "You need a 90 or above." << endl;
//            break;
//        }
//        case 'b':
//        case 'B': {
//            cout << "You need a 80-89." << endl;
//            break;
//        }
//        case 'c':
//        case 'C': {
//            cout << "You need 70-79" << endl;
//            break;
//        }
//        case 'd':
//        case 'D': {
//            cout << "You need a 60-69" << endl;
//            break;
//        }
//        case 'f':
//        case 'F': {
//            char confirm {};
//            
//            cout << "Are you sure you want an F? (y/n): ";
//            cin >> confirm;
//            
//            if (confirm == 'y' || confirm == 'Y') {
//                cout << "you did not study" << endl;
//            } 
//            else if (confirm == 'n' || confirm == 'N') {
//                cout << "good" << endl;
//            } 
//            else {
//                cout << "ERROR" << endl;
//            }
//            break;
//        }
//        default: {
//            cout << "Not Valid" << endl;
//            break;
//        }
//    }
    
    
/* EXAMPLE TWO */

    enum Direction {
        left, right, up, down
    };
    
    Direction heading {left};
    
    switch (heading) {
        case left: {
            cout << "Left" << endl;
            break;
        }
        case right: {
            cout << "Right" << endl;
            break;
        }
        case up: {
            cout << "Up" << endl;
            break;
        }
        default: {
            cout << "Okay" << endl;
            break;
        }
    }
    
    cout << endl;
    return 0;
}