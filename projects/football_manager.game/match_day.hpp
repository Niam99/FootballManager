#ifndef MATCH_DAY_HPP
#define MATCH_DAY_HPP

#include <iostream>
#include <string>
#include <vector>
#include "match.hpp"

class match_day {
public:
    match_day():
    match_day(std::vector<match> matches);
    void display();
private:
    std::vector<match> matches_;
};

#endif
