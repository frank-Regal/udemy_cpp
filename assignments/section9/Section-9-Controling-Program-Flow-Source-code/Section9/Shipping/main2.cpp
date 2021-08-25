#include <iostream>
#include <vector>

using namespace std;

int main () {
    
    
    int variable {0};
    
    vector <int> vec {1,2,3};
    vector <int> product {0};
    int sum {0};
    
    for (int i {0}; i < vec.size(); ++i) {
        for (int j {0}; j < vec.size(); ++j) {
            j += 1;
            product.push_back(vec[i] * vec[j]);
        }
    }
    
    for (auto k: product) {
        cout << k << endl;
        sum += k;
    }
    
    cout << "\n\n\n" << sum << endl;
    
    cout << endl;
    return 0;
}