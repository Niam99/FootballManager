#include <iostream>
#include <string>
#include <iomanip>
#include "standings_table_entry.hpp"

standings_table_entry::standings_table_entry() {}

standings_table_entry::standings_table_entry(std::string team_name,
    int wins,int losses,int draws, int points,int games_played) {
    std::cout << "constructor called" << std::endl;
    team_name_ = team_name;
    wins_ = wins;
    losses_ = losses;
    draws_ = draws;
    points_ = points;
    games_played_ = games_played;
}

void standings_table_entry::display() {
    // should not be any spaces where, use setw everywhere
    std::cout << std::setw(24) << team_name_;
    std::cout << std::setw(8) << wins_ << std::setw(9) << losses_ << std::setw(9)
              << draws_ << std::setw(9) << points_ << std::setw(9)
              << games_played_ << std::endl;
}
