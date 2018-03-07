#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <iostream>
#include "user.hpp"

class game{
public:
    game();
    //Not sure if needed
    //game_setup(std::string name, std::string team_name);

public:
    std::vector<user> user();
    int current_match_day;

private:

    std::vector<user> user_;
};

#endif
