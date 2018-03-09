#include <iostream>
#include <string>
#include "season.hpp"

season::season() {}

season::season(std::vector<match_day> match_days) {
    start_year_ = start_year;
    end_year_ = end_year;
    match_days_ = match_days;
}

void season::display() {
    std::cout << "Start date: " << start_year_ << std::endl;
    for (season& i:match_days_) {
        i.display();
    }
    std::cout << "End date: " << end_year_ << std::endl;
}

