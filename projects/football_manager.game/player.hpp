#ifndef PLAYERS_HPP
#define PLAYERS_HPP

#include <iostream>
#include <string>

class players {
    void setup();
    void display();
    std::string name;
    std::string team;
    int attack;
    int defense;
    std::string position;
};

#endif
