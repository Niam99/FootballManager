#ifndef CHOOSE_TEAM_HPP
#define CHOOSE_TEAM_HPP


#include <string>
#include <vector>
#include "menu_item.hpp"

class team_menu {
private:
    void choose_teams();

public:
    void setup(std::string team_name, std::string prompt,
        std::vector <std::string> team);

private:
    std::string team_;
    // std::string prompt_;
    std::vector <std::string> team;
};

#endif
