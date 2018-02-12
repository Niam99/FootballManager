#ifndef LEAGUE_HPP
#define LEAGUE_HPP

#include <iostream>
#include <string>

class league {
public:
    void setup(std::string teamname, int win, int draw, int loss,
        int played);
    void display();

    std::string teamname_;
    int win_;
    int draw_;
    int loss_;
    int played_;
};

#endif
