#ifndef CHOOSE_TEAMS_HPP
#define CHOOSE_TEAMS_HPP

#include <string>
#include <vector>

class choose{

public:
    void choose_teams();

    void setup(std::string name_, int rating);

    std::vector <std::string> team;
};

#endif
