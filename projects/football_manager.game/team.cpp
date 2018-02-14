#include <iostream>
#include "team.hpp"

team::team(std::string name, int rating)
    : name_(name){
}

std::string team::name() {
    return name_;
}

void team::read(std::istream& input_stream) {
    std::getline(input_stream, name_);
     std::cout << "Reading team: " << name_ << std::endl;
}
