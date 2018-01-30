#include <vector>
#include <iostream>
#include "menu.hpp"
#include "menu_item.hpp"

menu create_main_menu() {
    std::vector<menu_item> items;

    menu_item teams;
    teams.setup("Choose a team");
    items.push_back(teams);

    menu_item info;
    info.setup("Information");
    items.push_back(info);

    menu_item quit;
    quit.setup("Quit");
    items.push_back(quit);

    menu_item test;
    test.setup("test");
    items.push_back(test);

    menu main_menu;
    main_menu.setup("Main Menu", "Choose an option: ", items);
    return main_menu;
}

int main()
{
    // create an instance of the menu class.
    menu main_menu = create_main_menu();

    // "run" it
    int result = main_menu.run();

    // handle the result of the menu.
    if (result == 2) {
        std::cout << "User exited.";
    } else {
        std::cout << "user choose: " << result << std::endl;
    }
    return 0;
}
