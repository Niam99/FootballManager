#ifndef MENU_HPP
#define MENU_HPP


#include <string>
#include <vector>
#include "menu_item.hpp"

class menu {
private:
    void draw();

public:
    void setup(std::string name, std::string prompt,
        std::vector<menu_item> items);
    int run();

private:
    std::string name_;
    std::string prompt_;
    std::vector<menu_item> items_;
};

#endif
