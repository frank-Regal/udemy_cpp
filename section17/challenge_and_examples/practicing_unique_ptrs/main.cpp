#include <iostream>
#include <memory>
#include <vector>

class Test {
    std::string name;
    int num;
    friend std::ostream &operator<<(std::ostream &os, const Test &rhs);
public:
    Test (std::string a, int b) : name {a}, num {b} {std::cout << "2 Arg Constructor Called" << std::endl;}
    Test () : Test{"N/A", 0} {std::cout << "No Args Constructor Called" << std::endl;}
    Test (std::string a) : Test{a, 0} {std::cout << "1 Arg Constructor Called" << std::endl;}
    ~Test () {std::cout << "Destructor Called" << std::endl;}
};

std::ostream &operator<<(std::ostream &os, const Test &rhs) {
    return os << "Name: " << rhs.name << ", Num: " << rhs.num << std::endl;
}

int main () {
    
    int osiris {2};
    std::cout << &osiris << std::endl;
    
    std::unique_ptr<int> f1 {&osiris};
    
    int *f2 {nullptr};
    std::cout << &f2 << std::endl;
    f2 = &osiris;
    std::cout << *f2 << std::endl;
    
    std::unique_ptr<Test> p1 {new Test {}};
    std::cout << *p1 << std::endl;
    
    std::unique_ptr<Test> p2 = std::make_unique<Test> ("Frank", 25);
    std::cout << *p2 << std::endl;
    
    auto p3 = std::make_unique<Test> ("Osiris");
    std::cout << *p3 << std::endl;
    
    delete f2;
    
    
    return 0;
}