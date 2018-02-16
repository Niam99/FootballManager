#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include <istream>
#include "player.hpp"

class team {
public:
    team();
    team(std::string name, int rating);

public:
    void read(std::istream& input_stream);
    void chooseTeam(std::istream& input_stream);
    void set_pointer(int* pointer1);

    std::string name();
    int rating ();
    std::vector<team> teams();

public:
    int carrySelection;
    int* pointer1;

private:
    std::string name_;
    int rating_;
    std::vector<team> teams_;
};

#endif
