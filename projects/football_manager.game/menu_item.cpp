#include <iostream>
#include "menu_item.hpp"

menu_item::menu_item(std::string name) {
    name_ = name;
}

void menu_item::display(int position) {
    std::cout << "[" << position << "]" << " " << name_ << std::endl;
}
