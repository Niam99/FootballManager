#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include "player.hpp"

class team {
public:

    team(std::string name, int rating,std::vector<player> players);

public:

    std::string name();
    std::vector<player> players();

private:
    std::string name_;
    std::vector<player> players_;
}
