/* Section 8  - Mixed type expressions
 * 
 */

#include <iostream>

using namespace std;

int main() {
    
    const int count {3};
    
    cout << "Please enter three integers (seperated by spaces): ";
    
    int num1 {}, num2 {}, num3 {};
    cin >> num1 >> num2 >> num3;
    
    int sum {};
    sum = num1 + num2 + num3;
    
    double average {};
    average = static_cast<double>(sum) / 3;
    
    cout << "Three Entered Integers: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Sum of the integers: " << sum << endl;
    cout << "Average of the integers: " << average << endl;
    
    cout << endl;
    
}