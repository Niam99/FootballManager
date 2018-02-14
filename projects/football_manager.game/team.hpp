#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include "player.hpp"

class team {
public:
    team();
    team(std::string name, int rating);

public:
    void read(std::istream& input_stream);

    std::string name();

private:
    std::string name_;
};

#endif
