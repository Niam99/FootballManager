#ifndef STANDINGS_TABLE_ENTRY_HPP
#define STANDINGS_TABLE_ENTRY_HPP

#include <iostream>
#include <string>

class standings_table_entry {
public:
    standings_table_entry(std::string team_name, int wins, int losses,
        int draws,int points, int games_played);
    void display();

private:
    std::string team_name_;
    int wins_;
    int losses_;
    int draws_;
    int points_;
    int games_played_;
};

#endif
