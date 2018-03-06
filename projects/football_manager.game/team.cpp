#include <iostream>
#include "team.hpp"

team::team() {
}

team::team(std::string name, std::vector<player> players)
    : name_(name), players_(players){
}

std::string team::name() {
    return name_;
}

std::vector<player> team::players() {
    return players_;
}

void team::read(std::istream& input_stream) {
    std::getline(input_stream, name_);
    std::cout << "Reading team: " << name_ << std::endl;

    int number_of_players;
    input_stream >> number_of_players;
    std::cout << "Total players: " << number_of_players << std::endl;
    input_stream.ignore(1, '\n');

    for (int i = 0; i < number_of_players; ++i) {
        std::cout << "Reading player." << std::endl;

        player p;
        p.read(input_stream);
        players_.push_back(p);

        std::cout << "Finished reading player." << std::endl;
    }
}
