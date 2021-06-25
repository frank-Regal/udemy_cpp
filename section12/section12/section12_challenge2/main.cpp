#include <iostream>

using namespace std;

void print ( const int *const array_ptr, size_t array_size) {
    cout << "[ ";
    for (int i {0}; i < array_size; ++i ) {
        cout << array_ptr[i] << " ";
    }
    cout << "]" << endl;
}

int *apply_all (int const *array_ptr1, size_t array_size1, int const *array_ptr2, size_t array_size2) {
    int *new_array {};
    new_array = new int [array_size1*array_size2];
    int count {0};
    
    for (size_t j {0}; j < array_size2; ++j) {
        for (size_t k {0}; k < array_size1; ++k) {
                new_array[count] = array_prt1[k] * array_ptr2[j];
                count += 1;
        }
    }
    return new_array;
}

  

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1,array1_size,array2, array2_size);
    constexpr size_t results_size {array1_size*array2_size};
    
    cout << "Results";
    print(results, results_size);
    
    delete [] results;

    return 0;
}
