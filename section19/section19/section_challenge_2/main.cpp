// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <iomanip>
#include <fstream>

int main() {
    
    std::ifstream quiz_results;
    quiz_results.open("response.txt");
    
    if (!quiz_results) {
        std::cout << "Error Reading Input File" << std::endl;
        return 1;
    }
    
    
    std::string line;
    std::getline(quiz_results, line);
    std::string firstline {line};
    std::cout << "Answer Key is: " << firstline << std::endl;
    
    std::cout << std::setw(30) << std::setfill('=') << "=" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(10) << std::left << "Name"
                   << std::setw(10) << std::left << "Answer"
                   << std::setw(10) << std::left << "Grade"
                   << std::endl;

    int count {2};
    
    while (!quiz_results.eof()) {
        std::getline(quiz_results, line);
        
        //std::cout << line << std::endl;
        if (count%2 == 0) 
        {
            std::cout << line << std::endl;
        } 
        else
        {
            
            int frank = quiz_results.gcount();
            std::cout << frank;
        }
        ++count;
    }
        //std::cout << c;
    
    quiz_results.close();

    return 0;
}

