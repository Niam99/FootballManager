#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include "user.hpp"

class game {
public:
    game();
    game(std::vector<user> users, int current_match_day);

public:
    // NOTE: returning by reference &
    std::vector<user>& users();
    int current_match_day();

private:
    std::vector<user> users_;
    int current_match_day_;
};

#endif
