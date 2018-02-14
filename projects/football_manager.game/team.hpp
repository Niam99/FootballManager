#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include "player.hpp"

class team {
public:

    team(std::string name, int rating);

public:

    std::string name();

private:
    std::string name_;
}
