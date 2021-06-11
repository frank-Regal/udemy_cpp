/* c++ has:
    - for loop
    - range-based for loop
    - while loop
    - do-while loop
    */
 
 #include <iostream>
 #include <vector> 
 #include <iomanip>
 using namespace std;
 
 int main () {
     
     /* ================================================================================================
      * 
      * FOR LOOPS
      * Structure:
      * for (initialization ; condition ; increment) {
      *     statement (s);
      * }
      * 
      * */
 
//     for (int i {1} ; i <=10 ; ++i) {
//         cout << i << endl;
//     }
     
//     for (int i {1} ; i <=10 ; i += 2) {
//         cout << i << endl;
//     }

//     for (int i {10}; i > 0; --i) {
//         cout << i << endl;
//     }
//     
//     cout << "\n\n";
//     
//     // You can also use a comma operator in for loops
//     for (int i {1}, j {5} ; i <= 5 ; ++i, ++j) {
//         cout << i << " + " << j << " = " << (i + j) << endl;
//     }
//     
//     cout << "\n\n";
//     
//     
//     for (int i {1} ; i <= 100; ++i) {
//         cout << i << ((i % 10 == 0) ?  "\n" : " ");
//     }
//     
//     cout << "\n\n";
//     
//     // Looping through vectors
//     
//     vector <int> nums {10, 20, 30 ,40, 50}; // need to include vector in code 
//     
//     for (unsigned i {0} ; i < nums.size() ; ++i) {
//         cout << nums[i]  << endl;
//     }
//     
//     cout << "\n\n";
//     
//     int x{0};
//     
//     for (int i {1}; i <=15; ++i){
//         if (i % 2 != 0) {
//             x += i;
//         }
//     }
//     int sum = x;
//     cout << sum << endl;

/* =============================================================================================
 * Range Based FOR LOOP
 * Structure:
 * for (var_type var_name: sequence) {
 *      statement; // can use var_name
 * }
 * 
 */
// 
//    int scores [] {10, 20, 30};
//    
//    for (auto score: scores) {
//        cout << score << endl;
//    }
//     
//    vector <double> temp {234.3, 231.4, 12.3, 34.4};
//    
//    double average_temp {};
//    double running_total {};
//    
//    for (auto t: temp) {
//        running_total += t;
//    }
//    
//    temp.size() != 0 ? average_temp = running_total / temp.size() : average_temp = 0;
//    
//    cout << fixed << setprecision(3);
//    cout << average_temp << endl;
//
//    for (auto val: {1, 2, 3, 4, 5}){
//        cout << val << endl;
//    }
//
//    for (auto val: "This is a test") {
//        if (val != ' ')
//            cout << val;
//        
//    }

//     cout << endl;
     /* ================================================================================================
      * WHILE Loop
      * structure:
      * while (expression) {
      *      statement;
      * }
      * 
      */
//      
//      int num {};
//      cout << "Enter a pos integer: ";
//      cin >> num;
//      
//      while (num > 0) {
//          cout << num << endl;
//          --num;
//      }
//      
//      cout << "Blastoff!" << endl;
//
//        bool done {false};
//        int number {0};
//        
//        while (!done) {
//            cout << "Enter an integer between 1 and 5: ";
//            cin >> number;
//             if (number <=1 || number >= 5) {
//                 cout << "No good" << endl;
//             } else {
//                 cout << "Thank you" << endl;
//                 done = true;
//             }
//        }
//      
    
     
     /* ======================================================================================
      * do-while loop
      * structure:
      * do {
      *     statements;
      * } while (expressions);
      * 
      */
      
      char selection {};
      
      do {
          cout << "----------------------------------------" << endl;
          cout << "1. Do this" << endl;
          cout << "2. Do that" << endl;
          cout << "3. Do something" << endl;
          cout << "Q to quit" << endl;
          cout << "Enter your selection: ";
          cin >> selection;
          cout << endl;
          
          if (selection == '1') {
              cout << "Choice 1" << endl;
          } else if (selection == '2') {
              cout << "Choice 2" << endl;
          } else if (selection == '3') {
              cout << "Choice 3" << endl;
          } else if (selection == 'Q' || selection == 'q') {
              cout << "Goodbye..." << endl;
          } else {
              cout << "INVALID ENTRY" << endl;
          }
      } while (selection != 'q' && selection != 'Q');
      
      
      
      

 
     cout << endl;
     return 0;
 }

   