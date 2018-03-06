#ifndef MATCH_DAY_HPP
#define MATCH_DAY_HPP

#include <iostream>
#include <string>
#include <vector>
#include "match.hpp"

class match_day {
public:
    void setup(std::vector<match> day);

private:
    std::vector<match> day_;
};

#endif
