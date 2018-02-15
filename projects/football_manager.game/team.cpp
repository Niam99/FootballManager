#include <iostream>
#include "team.hpp"

team::team(){
}

team::team(std::string name, int rating)
    : name_(name), rating_(rating){

}

int team::rating(){
    return rating_;
}

std::string team::name() {
    return name_;
}

void team::read(std::istream& input_stream) {
    std::getline(input_stream, name_);
    std::cout << "\nTeams" << std::endl;
    for(int i = 0; i < 20; ++i){
        std::cout << "["<< i << "] " << name_ << std::endl;;
        input_stream >> name_;
    }

}

void team::chooseTeam(std::istream& input_stream) {

    int option;

    std::cout << "Choose a team:";
    std::cin >> option;

    for (int j = 0; j < option; ++j){
        std::getline(input_stream, name_);
        input_stream >> name_;
    }

    std::cout << "\nYou have selected: " << name_
                      << std::endl << std::endl;
}
