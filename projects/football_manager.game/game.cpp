#include <iostream>
#include "game.hpp"

game::game() {

}

game::game(std::vector<user> users, int current_match_day)
    : users_(users), current_match_day_(current_match_day) {
}
