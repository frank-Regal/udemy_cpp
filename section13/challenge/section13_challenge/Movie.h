#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>
#include <vector>

class Movie
{
    // Attributes
    std::string title;
    std::string stars;
    int views;
    std::vector<std::string> new_movie_entry;
    
public:
    
    Movie();
    Movie(std::string movie_name, std::string movie_rating, int num_times_watched);
    std::string display();
    ~Movie();
    
};

#endif // MOVIE_H
