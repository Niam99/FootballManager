#ifndef LEAGUE_HPP
#define LEAGUE_HPP

#include <string>
#include <vector>
#include <istream>
#include "squad.hpp"

class league {
public:
    league();
    league(std::string name, std::vector<squad> squads);

public:
    std::string name();
    std::vector<squad> squads();

public:
    void read(std::istream& input_stream);

private:
    std::string name_;
    std::vector<squad> squads_;
};

#endif
