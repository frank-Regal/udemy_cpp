#include <iostream>
#include <string>
#include "Movies.h"
#include "Movie.h"


Movies::Movies() 
{
    
}

bool Movies::add_movie(std::string name, std::string rating, int watched) 
{
    std::cout << name << std::endl;
    std::cout << rating << std::endl;
    std::cout << watched << std::endl;
    
    //Movie new_movie (name, rating, watched);
    //std::cout << "Added: " << name << " to Movie class" << endl;
    
    
    
    
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
        std::cout << "No Movies in List" << std::endl;
        }
        else 
            {
            for (std::string c : vec)
                std::cout << c << std::endl;
            }
}

Movies::~Movies()
{
}



