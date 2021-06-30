#ifndef MOVIES_H
#define MOVIES_H

// Section 13 Challenge for CPP Udemy Class
// Implement a movie program

#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
    // Attributes
    std::vector<std::string> vec;
    
public:
    
    // Declarations
    Movies();
    ~Movies();
    bool add_movie(std::string name, std::string rating, int watched);
    bool increment_watched(std::string name);
    void display();

};

#endif // MOVIES_H
