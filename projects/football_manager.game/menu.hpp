#ifndef MENU_HPP
#define MENU_HPP


#include <string>
#include <vector>
#include "menu_item.hpp"

class menu {
public:
    menu(std::string name, std::string prompt, std::vector<menu_item> items);

private:
    void display();

public:
    int run();

private:
    std::string name_;
    std::string prompt_;
    std::vector<menu_item> items_;
    std::string team_;
    std::vector <std::string> team;
};

#endif
