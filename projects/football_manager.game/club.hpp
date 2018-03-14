#ifndef CLUB_HPP
#define CLUB_HPP

#include <string>
#include <vector>
#include <istream>

class club {
public:
    club();
    club(std::string name);

public:
    std::string name();

private:
    std::string name_;

};

#endif
