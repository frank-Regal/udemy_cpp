#include <iostream>
#include <string>
#include "Movie.h"

Movie::Movie(std::string movie_name, std::string movie_rating, int num_times_watched)
    : title{movie_name}, stars{movie_rating}, views{num_times_watched} {
        std::cout << "Three Arg Contructor Called (Movie)" << std::endl;
    }

Movie::Movie()
    : Movie {"N/A", "N/A", 0} {
        std::cout << "No Arg Constructor Called (Movie)" << std::endl;
}

std::string Movie::display() {
    std::string list;
    list = title + ", " + stars + ", " + std::to_string(views) ;
    return list;
}



Movie::~Movie()
{
}

