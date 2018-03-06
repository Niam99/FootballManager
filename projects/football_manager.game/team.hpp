#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include <istream>
#include "player.hpp"

class team {
public:
    team();
    team(std::string name, std::vector<player> players);

public:
    std::string name();
    std::vector<player> players();
    // int wins();
    // int number_of_wins;
    // int losses();
    // int number_of_losses;
    // int draws();
    // int number_of_draws;
    // int points;

public:
    void read(std::istream& input_stream);

private:
    std::string name_;
    std::vector<player> players_;
    // int wins_;
    // int losses_;
    // int draws_;
};

#endif
