#include <iostream>
#include <iomanip>
#include <memory>

int main() {
    std::cout << "My Template" << std::endl;
    int num = 200;
    std::shared_ptr<int> ptr = std::make_shared<int>(200);
    std::cout <<  ptr << std::endl;
    std::cout << std::oct << ptr << std::endl;
    return 0;
}
