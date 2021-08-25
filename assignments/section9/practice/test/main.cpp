#include <iostream>
#include <vector>

using namespace std;

int main() {
    
        
    int variable {0};
    
    vector <int> vec {1,2,3};
    vector <int> product {};
    int result {0};
    
    if (vec.size() > 1) {
          for (int i {0}; i < vec.size(); ++i) {
            for (int j {i + 1}; j < vec.size(); ++j) {
                product.push_back(vec[i] * vec[j]);
            }
        }
          for (auto k: product) {
            cout << k << endl;
            result += k;
            }
    } else {
        result = 0;
    }
    
    cout << "\n" << result << endl;
    
    cout << endl;
    return 0;

}

