#include <iostream>
#include "league.hpp"

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

    // first we read the name
    std::getline(input_stream, name_);
    // note that we do getline instead of:
    // input_stream >> name_;
    //
    std::cout << "Name:  " << name_ << std::endl;

    // then we read the total number of teams in the league
    int number_of_teams;
    input_stream >> number_of_teams;

    // skip the end of line
    input_stream.ignore(1, '\n');

    std::cout << "Total teams: " << number_of_teams << std::endl;

    // now we nead to read each team.
    for (int i = 0; i < number_of_teams; ++i) {
        std::cout << "Reading team" << std::endl;

        // create an empty team
        team t;

        // get the team to read itself from the file.
        t.read(input_stream);

        // add the team to our collection of teams.
        teams_.push_back(t);
        std::cout << "Finished reading team" << std::endl;
    }
    std::cout << "Finished reading league." << std::endl;
}
