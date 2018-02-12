#include <iostream>
#include <string>
#include "league.hpp"

void league::setup(std::string teamname, int win, int draw, int loss,
    int played) {

    teamname_ = teamname;
    win_ = win;
    draw_ = draw;
    loss_ = loss;
    played_ = played;
}

void league::display() {
    std::cout << "Team: " << teamname_ << std::endl;
    std::cout << "Wins: " << win_ << std::endl;
    std::cout << "Draws: " << draw_ << std::endl;
    std::cout << "Losses: " << loss_ << std::endl;
    std::cout << "Games Played: " << played_ << std::endl;
}
