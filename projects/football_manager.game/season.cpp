#include <iostream>
#include <string>
#include "season.hpp"

season::season() {}

season::season(int start_year, int end_year, std::vector<match_day> match_days) {
    start_year_ = start_year;
    end_year_ = end_year;
    match_days_ = match_days;
}

void season::display() {
    int day_no = 1;
    std::cout << "Start date: " << start_year_ << std::endl;
    for (match_day& i:match_days_) {
        std::cout << "Day " << day_no << " (" << i.matches().size() << ")"
                  << std::endl;
        i.display();
        day_no = day_no + 1;
    }
    std::cout << "End date: " << end_year_ << std::endl;
}
