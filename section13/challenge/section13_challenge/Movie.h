#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

class Movie
{
    // Attributes
    std::string name;
    std::string rating;
    int watched;
    
public:
    
    Movie();
    Movie(std::string name, std::string rating, int watched);
    ~Movie();
    
};

#endif // MOVIE_H
