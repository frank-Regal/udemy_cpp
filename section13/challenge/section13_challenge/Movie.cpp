#include <iostream>
#include <string>
#include "Movie.h"

Movie::Movie(std::string movie_name, std::string movie_rating, int num_times_watched)
    : name{movie_name}, rating{movie_rating}, watched{num_times_watched} {
        std::cout << "Three Arg Contructor Called (Movie)" << std::endl;
    }

Movie::Movie()
    : Movie {"N/A", "N/A", 0} {
        std::cout << "No Arg Constructor Called (Movie)" << std::endl;
}



Movie::~Movie()
{
}

