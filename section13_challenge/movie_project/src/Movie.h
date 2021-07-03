#ifndef _MOVIE_H
#define _MOVIE_H

#include <vector>
#include <string>
#include <iostream>

class Movie {
    std::string name_of_movie;
    std::string rating_of_movie;
    int num_times_watched;

public:

    Movie(std::string name_of_movie, std::string rating_of_movie, int num_times_watched);
    void display();
    std::string get_name();
    int add_to_watched();

};

#endif // _MOVIE_H