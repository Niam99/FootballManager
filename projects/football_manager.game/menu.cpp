#include <iostream>
#include <string>
#include "menu.hpp"

void menu::draw() {
    std::cout << name_ << std::endl;
    for (int i = 0; i < items_.size(); ++i) {
        items_[i].draw(i);
    }
    std::cout << prompt_;
}


void menu::setup(std::string name, std::string prompt,
    std::vector<menu_item> items) {
    name_ = name;
    prompt_ = prompt;
    items_ = items;
}

int menu::run() {
    int user_choice;
    bool choice_valid = false;

    do {
        draw();
        std::cin >> user_choice;
        choice_valid = user_choice < items_.size();
        if (choice_valid)
            return user_choice;
        else
            std::cout << "Please enter a valid menu choice." << std::endl;
    } while (choice_valid == false);
}
