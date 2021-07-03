
#include <vector>
#include <string>
#include <iostream>
#include "Movie.h"


Movie::Movie(std::string name_of_movie, std::string rating_of_movie, int num_times_watched)
    : name_of_movie{name_of_movie}, rating_of_movie{rating_of_movie}, num_times_watched{num_times_watched} {
}

void Movie::display() {
    std::cout << name_of_movie << ", " << rating_of_movie << ", " << num_times_watched << std::endl;
}

std::string Movie::get_name(){
    this->name_of_movie = name_of_movie;
    return name_of_movie;
}


int Movie::add_to_watched(){
    this->num_times_watched += 1;
    return num_times_watched;
}