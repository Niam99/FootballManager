#ifndef TEAM_MANAGEMENT_HPP
#define TEAM_MANAGEMENT_HPP

#include <string>
#include "game.hpp"

class team_management {
public:
    team_management();
    team_management(std::string name);

public:
    void display();

public:
    std::string name;
    
private:
    game game_;
};

#endif
