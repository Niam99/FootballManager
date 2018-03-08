#ifndef MENU_ITEM_HPP
#define MENU_ITEM_HPP

#include <string>

class menu_item {
public:
    menu_item(std::string name);

public:
    void display(int position);

private:
    std::string name_;
};

#endif
