#include <iostream>

using namespace std;

int main () {
    // Basic intro to pointers
    int num {5};
    
    cout << "The value of num is: " << num << endl; // 5
    cout << "The size of num is " << sizeof num << " bytes" << endl; 
    cout << "The address of num is " << &num << endl;
    cout << endl;
    
    int *p {nullptr};
    
    cout << "The value of pointer p is: " << p << endl; // 0
    cout << "The size of pointer p is: " << sizeof p << endl;
    cout << "The address of pointer p is: " << &p << endl;
    
    cout << endl;
    p = &num;
    
    cout << "num is assigned to p, the value of p is now: " << p << endl;
    
    // Dereferencing Points
    cout << "\n\n Dereferencing Pointers" << endl;
    
    double frank {3.14};
    double *frank_ptr {&frank};
    
    cout << "The value of frank is: " << frank << endl; // 3.14
    cout << "The value of frank_prt is " << frank_ptr << endl; //some hexadecimal address to the variables frank position in memory
    cout << "The dereferenced value of frank_ptr is " << *frank_ptr << endl; // 3.14
    
    *frank_ptr = 5.14;
    
    cout << endl;
    cout << "The new dereferenced value of frank_prt is: " << *frank_ptr << endl; // 5.14
    //cout << "The value of frank_ptr is still " << frank_prt << endl; // same hexadecimal value as above
    
    
    cout << endl;
    return 0;
}