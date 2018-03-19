#include <iostream>
#include <string>
#include <vector>
#include "match_day.hpp"

match_day::match_day() {}

match_day::match_day(std::vector<match> matches) {
    matches_ = matches;
}

void match_day::display() {
   int match_no = 1;
   for (match& i:matches_) {
        std::cout << "Match " << match_no << std::endl;
        i.display();
        match_no = match_no + 1;
    }
}

std::vector<match>& match_day::matches() {
    return matches_;
}
