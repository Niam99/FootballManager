#include <iostream>
#include "game.hpp"

game::game() {}

game::game(std::vector<user> users, int current_match_day)
    : users_(users), current_match_day_(current_match_day) {}

std::vector<user>& game::users() {
    return users_;
}

int game::current_match_day() {
    return current_match_day_;
}
