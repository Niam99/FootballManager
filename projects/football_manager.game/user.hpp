#ifndef USER_HPP
#define USER_HPP

#include <string>

class user {
public:
    user();
    user(std::string name, std::string team_name);

public:
    std::string name();
    std::string team_name();

private:
    std::string name_;
    std::string team_name_;
};

#endif
