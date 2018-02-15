#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include <istream>
#include "player.hpp"

class team {
public:
    team();
    team(std::string name, int rating);

public:
    void read(std::istream& input_stream);

    std::string name();
    std::vector<team> teams();

private:
    std::string name_;
    int rating_;
    std::vector<team> teams_;
};

#endif
