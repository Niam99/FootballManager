#include <iostream>
#include "player.hpp"

player::player(){
}

player::player(std::string playerName, int playerRating)
    : name_(playerName), rating_(playerRating){

}

int player::playerRating(){
    return rating_;
}

std::string player::playerName() {
    return name_;
}

void player::readPlayer(std::istream& input_stream) {
    std::getline(input_stream, name_);
    std::cout << "\nPlayers" << std::endl;
    for(int i = 0; i < 11; ++i){
        std::cout << "["<< i << "] " << name_ << std::endl;;
        input_stream >> name_;
    }

}

void player::choosePlayer(std::istream& input_stream) {

    int option;

    std::cout << "Choose a player:";
    std::cin >> option;

    for (int j = 0; j < option; ++j){
        std::getline(input_stream, name_);
        input_stream >> name_;
    }

    std::cout << "\nYou have selected: " << name_
                      << std::endl << std::endl;
}
