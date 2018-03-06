#ifndef MATCH_HPP
#define MATCH_HPP

#include <iostream>
#include <string>

class match {
public:
    void setup(std::string home_team_name, int home_score, std::string away_team_name,
               int away_score, int minutes);
    void display();

private:
    std::string home_team_name_;
    int home_score_;
    std::string away_team_name_;
    int away_score_;
    int minutes_;
};

#endif
