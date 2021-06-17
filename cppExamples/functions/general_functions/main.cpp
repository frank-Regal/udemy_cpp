#include <iostream>
#include <cmath>   // required for math
#include <cstdlib> // required for rand()
#include <ctime>   // required for time()

using namespace std;

int main () {
    
    double num {};
    cout << "Please enter a number (double): ";
    cin >> num;
    
    cout << "Square Root: " << sqrt(num) << endl;
    cout << "Cubed Root: " << cbrt(num) << endl;
    
    // Random number generator
    int random_number {};
    size_t count {10};
    int min {1};
    int max {6};
    
    cout << "RAND_MAX: " << RAND_MAX << endl;
    srand(time(nullptr));
    
    for (size_t i {1}; i <=count; ++i) {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }
    cout << endl;
    return 0;
}
