#include <iostream>
#include "team.hpp"

team::team() {
}

team::team(std::string name, std::vector<player> players)
    : name_(name), players_(players) {
}

std::string team::name() {
    return name_;
}

std::vector<player> team::players() {
    return players_;
}

void team::read(std::istream& input_stream) {
    // first we read the team name
    std::getline(input_stream, name_);
    // note that we do not do:
    // input_stream >> name_;
    std::cout << "Reading team: " << name_ << std::endl;

    // then we read the total number of players in the team.
    int number_of_players;
    input_stream >> number_of_players;
    std::cout << "Total players: " << number_of_players << std::endl;

    // now we nead to read each player.
    for (int i = 0; i < number_of_players; ++i) {
        std::cout << "Reading player." << std::endl;

        // create an empty player
        player p;

        // get the player to read itself from the file.
        p.read(input_stream);

        // add the player to our collection of players.
        players_.push_back(p);

        std::cout << "Finishd reading player." << std::endl;
    }
}
