#ifndef PLAYERS_HPP
#define PLAYERS_HPP

#include <iostream>
#include <string>

class players {
public:
    void setup(std::string name, std::string team, int attack, int defense,
        std::string position);
    void display();

    std::string name_;
    std::string team_;
    int attack_;
    int defense_;
    std::string position_;
};

#endif
