#ifndef PLAYERS_HPP
#define PLAYERS_HPP

#include <iostream>
#include <string>

class players {
public:
    void setup();
    void display();

    std::string name_;
    std::string team_;
    int attack_;
    int defense_;
    std::string position_;
};

#endif
