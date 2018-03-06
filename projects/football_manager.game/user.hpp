#ifndef USER_HPP
#define USER_HPP

#include <string>
#include <iostream>

class user{
public:
    user();

public:
    std::string name();
    std::string team_name();

private:

    std::string name_;
    std::string team_name_;
};

#endif
