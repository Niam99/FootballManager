#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <string>

class game {
public:
    void setup(std::string team1, std::string team2, int t1goals, int t2goals);
    void display();

    std::string team1_;
    std::string team2_;
    int t1goals_;
    int t2goals_;
};

#endif
