#ifndef _MOVIES_H
#define _MOVIES_H

#include <vector>
#include <string>
#include <iostream>
#include "Movie.h"

class Movies {
    // Attributes
    std::vector<Movie> vec;

public:
    // Prototypes
    Movies();
    bool add_movie(std::string name, std::string rating, int watched);
    bool increment_watched(std::string name);
    void display();
};


#endif // _MOVIES_H





