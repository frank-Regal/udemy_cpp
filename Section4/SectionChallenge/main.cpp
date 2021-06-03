/********************************
 * author: Frank Regal
 * date: 2021.06.02
 * title: First c++ source code for section 4
 * resource: https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535342#overview
 * 
 ********************************/

#include <iostream>

// First Line of Code


int main() 
{
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing! That is my favorite number too!" << std::endl;
    std::cout << "No Really!!, " << favorite_number << " is my favorite number!" << std::endl;
    return 0;
}