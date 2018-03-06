#include <iostream>
#include <string>
#include "standings_table_entry.hpp"

void standings_table_entry::setup(std::string team_name, int wins,int losses, int draws, int points,int games_played) {

    team_name_ = team_name;
    wins_ = wins;
    losses_ = losses;
    draws_ = draws;
    points_ = points;
    games_played_ = games_played; 
}

void standings_table_entry::display() {
    std::cout << team_name_ << std::endl;
    std::cout << wins_ << std::endl;
    std::cout << losses_ << std::endl;
    std::cout << draws_ << std::endl;
    std::cout << points_ << std::endl;
    std::cout << games_played_ << std::endl;
}
     
        
  