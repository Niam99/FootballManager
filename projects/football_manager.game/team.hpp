#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include <istream>
#include "player.hpp"

class team {
public:
    team();
    team(std::string name, std::vector<player> players, int wins);

public:
    std::string name();
    std::vector<player> players();
    int wins();
    int number_of_wins;
public:
    void read(std::istream& input_stream);

private:
    std::string name_;
    std::vector<player> players_;
    int wins_;
};

#endif
