#include <iostream>
#include <string>
#include "game.hpp"

void game::setup(std::string team1, std::string team2, int t1goals, int t2goals) {

    team1_ = team1;
    team2_ = team2;
    t1goals_ = t1goals;
    t2goals_ = t2goals;
}

void game::display() {
    std::cout << "Team 1: " << team1_ << std::endl;
    std::cout << "Team 2: " << team2_ << std::endl;
    std::cout << team1_ << " scored " << t1goals_ << " goals." << std::endl;
    std::cout << team2_ << " scored " << t2goals_ << " goals." << std::endl;
}
