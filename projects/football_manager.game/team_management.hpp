#ifndef TEAM_MANAGEMENT_HPP
#define TEAM_MANAGEMENT_HPP

#include <string>
#include "game.hpp"

class team_management {
public:
    team_management();

public:
    void display();

private:
    game game_;
};

#endif
