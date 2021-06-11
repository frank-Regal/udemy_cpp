/* Conditional Operator
 * 
 * (cond_expr) ? expr1 : expr2
 * 
 * if condition expression evaluated above is true, expr1 is evaluated, and if false expr2 is evaluated.
 * 
 * *Great to use these inside loops and inside output statements
 * */
 
 #include <iostream>
 #include <iomanip>
 
 using namespace std;
 
 int main () {
     
     int num {};
     
//     cout << "Enter num: ";
//     cin >> num;
//     
//     if (num % 2 == 0) {
//         cout << num << " is even" << endl;
//     }
//     else {
//         cout << num << " is odd" << endl;
//     }

/* Conditional Operator*/
//     cout << num << " is " << ( (num % 2 == 0) ? "even" : "odd" ) << endl;
     
     int num1 {}, num2 {};
     cout << "Enter two ints: ";
     cin >> num1 >> num2;
     
     if (num1 != num2) {
         cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
         cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
     }
     else {
         cout << num1 << " is equal to " << num2 << endl;
     }
     
     cout << endl;
     return 0;
 }