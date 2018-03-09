#include <iostream>
#include <string>
#include <vector>
#include "match_day.hpp"

match_day::match_day() {}

match_day::match_day(std::vector<match> matches) {
    matches_ = matches;
}

void match_day::display() {
   for (match_day& i:matches_) {
        i.display();
    }
}

