#include <iostream>
#include <string>
#include "menu.hpp"

menu::menu(std::string name, std::string prompt, std::vector<menu_item> items) {
    name_ = name;
    prompt_ = prompt;
    items_ = items;
}

void menu::display() {
    std::cout << name_ << std::endl;
    for (int i = 0; i < items_.size(); ++i) {
        items_[i].display(i);
    }
    std::cout << prompt_;
}

int menu::run() {
    int user_choice;
    bool choice_valid = false;

    do {
        display();
        std::cin >> user_choice;
        choice_valid = user_choice < items_.size();
        if (choice_valid)
            return user_choice;
        else
            std::cout << "Please enter a valid menu choice." << std::endl;
    } while (choice_valid == false);
}
