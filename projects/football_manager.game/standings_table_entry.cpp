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
    std::cout << std::setw(20) << team_name_;
    std::cout << "           " << wins_ << "        " << losses_ << "         "
              << draws_ << "          " << points_ << "        "
              << games_played_
              << std::endl;
}
