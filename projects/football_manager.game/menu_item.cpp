#include <iostream>
#include "menu_item.hpp"

void menu_item::setup(std::string name) {
    name_ = name;
}

void menu_item::draw(int position) {
    std::cout << "[" << position << "]" << " " << name_ << std::endl;
}
