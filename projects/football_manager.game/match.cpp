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
    std::cout << home_team_name_ << std::endl;
    std::cout << home_score_ << std::endl;
    std::cout << away_team_name_ << std::endl;
    std::cout << away_score_ << std::endl;
    std::cout << minutes_ << std::endl;
}
     
        
  
