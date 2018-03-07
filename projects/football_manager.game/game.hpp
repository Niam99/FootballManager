#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include <iostream>
#include "user.hpp"

class game{
public:
    game_setup(std::vector<user> users, int current_match_day);

private:
    std::vector<user> users_;
    int current_match_day_;

};

#endif
