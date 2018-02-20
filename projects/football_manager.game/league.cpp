#include <iostream>
#include "league.hpp"
#include "table.hpp"

league::league() {
}

league::league(std::string name, std::vector<team> teams)
    : name_(name), teams_(teams) {
}

std::string league::name() {
    return name_;
}

std::vector<team> league::teams() {
    return teams_;
}

void league::read(std::istream& input_stream) {
    std::cout << "Reading league." << std::endl;

    std::getline(input_stream, name_);
    
    std::cout << "Name:  " << name_ << std::endl;

    table t;
    t.grabTeamName();
    
    int number_of_teams;
    input_stream >> number_of_teams;

   
    input_stream.ignore(1, '\n');

    std::cout << "Total teams: " << number_of_teams << std::endl;

    
    /*for (int i = 0; i < number_of_teams; ++i) {
        std::cout << "Reading team" << std::endl;

        
        team t;

        t.read(input_stream);

        teams_.push_back(t);
        std::cout << "Finished reading team" << std::endl;
    }*/
}
