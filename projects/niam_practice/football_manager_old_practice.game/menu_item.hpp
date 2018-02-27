#ifndef MENU_ITEM_HPP
#define MENU_ITEM_HPP

#include <string>

class menu_item {
public:
    void setup(std::string name);
    void draw(int position);

private:
    std::string name_;
};

#endif
