#ifndef MENU_HPP
#define MENU_HPP


#include <string>
#include <vector>
#include "menu_item.hpp"

class menu {
private:
    void draw();
    //void choose_teams();

public:
    void setup(std::string name, std::string prompt,
        std::vector<menu_item> items);
    int run();
    void setup(std::string team_name, std::string prompt,
        std::vector <std::string> team);

private:
    std::string name_;
    std::string prompt_;
    std::vector<menu_item> items_;
    std::string team_;
    std::vector <std::string> team;
};

#endif
