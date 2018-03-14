#include <iostream>
#include "league.hpp"

league::league() {
}

league::league(std::string name, std::vector<squad> squads)
    : name_(name), squads_(squads) {
}

std::string league::name() {
    return name_;
}

std::vector<squad> league::squads() {
    return squads_;
}

void league::read(std::istream& input_stream) {
    std::cout << "Reading league." << std::endl;
    std::getline(input_stream, name_);
    std::cout << "Name:  " << name_ << std::endl;
    int number_of_teams;
    input_stream >> number_of_teams;
    input_stream.ignore(1, '\n');

    std::cout << "Total teams: " << number_of_teams << std::endl;
    for (int i = 0; i < number_of_teams; ++i) {
        std::cout << "Reading team" << std::endl;
        squad s;
        s.read(input_stream);
        squads_.push_back(s);
        std::cout << "Finished reading team" << std::endl;
    }
    std::cout << "Finished reading league." << std::endl;
}
