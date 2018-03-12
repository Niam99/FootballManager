#include <iostream>
#include <string>
#include "match.hpp"

match::match() {}

match::match(std::string home_team_name, int home_score,
             std::string away_team_name, int away_score,
             int minutes) {
    home_team_name_ = home_team_name;
    home_score_ = home_score;
    away_team_name_ = away_team_name;
    away_score_ = away_score;
    minutes_ = minutes;
}

void match::display() {
    std::cout << "Home team: " << home_team_name_ << " Score: " << home_score_  << std::endl;
    std::cout << "Away team: " << away_team_name_ << " Score: " << away_score_ << std::endl;
    std::cout << "Match Time: " << minutes_ << std::endl;
    std::cout << std::endl;
}
     
        
  
