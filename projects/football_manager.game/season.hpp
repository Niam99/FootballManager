#ifndef SEASON_HPP
#define SEASON_HPP

#include <iostream>
#include <string>

class season {
public:
    season();
    season(int start_year, int end_year, std::vector<match_day> match_days);

public:
    void display();
private:
    std::vector<match_day> match_days_;
    int start_year_;
    int end_year_;
};

#endif
