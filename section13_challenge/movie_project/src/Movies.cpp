#include <vector>
#include <string>
#include <iostream>
#include "Movies.h"

Movies::Movies(){

}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    
    for (Movie &movie: vec) {
        if (movie.get_name() == name){
            return false;
        }
    } 

    Movie temp {name, rating, watched};
    vec.push_back(temp);
    return true;

}

void Movies::display() {
    if (vec.size() == 0) {
        std::cout << "No Movies Added Yet\n" << std::endl;
    } else {
        std::cout << "\nCurrent Movies In List: " << std::endl;
        for (Movie movie: vec) {
            movie.display();
        }
    }
    std::cout << std::endl;
}

bool Movies::increment_watched(std::string name) {
    for (Movie c: vec) {
        if (c.get_name() == name){
            c.add_to_watched();
            std::cout << "Added Watch. Movie is now listed as: " << std::endl;
            c.display();
            return true;
        }
    }
    return false;
}