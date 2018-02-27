#ifndef LEAGUE_HPP
#define LEAGUE_HPP

#include <string>
#include <vector>
#include <istream> 
#include "team.hpp"

class league {
public:
    
    league();

    
    league(std::string name, std::vector<team> teams);

public:
    
    std::string name();

    
    std::vector<team> teams();

public: 
    void read(std::istream& input_stream);


private: 
    std::string name_;
    std::vector<team> teams_;
};

#endif
