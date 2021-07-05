#include <iostream>
#include <string>
#include "Movies.h"
#include "Movie.h"


Movies::Movies() 
{
    
}


Movie Movies::create_movie(Movie &name) {
    
}

bool Movies::add_movie(std::string name, std::string rating, int watched) 
{
    //Movie movie_name {name, rating, watched};
    //vec.push_back(movie_name.display());
    return true;
}

bool Movies::increment_watched(std::string name) 
{
    std::cout << "increment_watched called" << std::endl;
    return true;
}


void Movies::display() 
{
    std::cout << "called display" << std::endl; // Debug getting called 
    
    if (vec.size() == 0) 
        {
        std::cout << "No Movies in List\n" << std::endl;
        }
        else 
            {
            for (auto i {0}; i < vec.size(); ++i) {
                std::cout << vec[i] << std::endl;
            }
}

Movies::~Movies()
{
}



