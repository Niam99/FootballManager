#include <iostream>
#include "player.hpp"

player::player() {
}

player::player(std::string name, std::string position)
    : name_(name), position_(position) {
}

std::string player::name() {
    return name_;
}

std::string player::position() {
    return position_;
}

void player::read(std::istream& input_stream) {
    std::getline(input_stream, name_);

    std::cout << "Reading player: " << name_ << std::endl;
    input_stream >> position_;
    std::cout << "Reading position: " << position_ << std::endl;
    input_stream.ignore(1, '\n');

}
