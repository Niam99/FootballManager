#include <vector>
#include <iostream>
#include "menu.hpp"
#include "menu_item.hpp"
#include "choose_teams.hpp"
#include "choose_player.hpp"
#include "player.hpp"

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

std::vector<player> create_players() {
    player De_Gea;
    De_Gea.setup("David De Gea", "Man-Utd", 24, 95, "GK");

    // OR
    player De_Gea2;
    De_Gea2.name_ = "David De Gea";
    De_Gea2.team_ = "Man-Utd";
    De_Gea2.attack_ = 24;
    De_Gea2.defense_ = 95;
    De_Gea2.position_ = "GK";

    std::vector<player> players;
    players.push_back(De_Gea);
    // OR
    // players.push_back(De_Gea2);
    return players;
}

int main()
{
    // create an instance of the menu class.
    menu main_menu = create_main_menu();
    //showplayers()

    // "run" it
    int result = main_menu.run();
    if (result == 0 ){
        // FIXME: not the right place, quick hack
        std::vector<player> players = create_players();
        for (int i = 0; i < players.size(); ++i)
            players[0].display();

        // end FIXME
        //choose_teams();
        choose_player();

        //choose_teams();

    } else {
        std::cout << "user choose: " << result << std::endl;
    }
    return 0;
    // handle the result of the menu.
    if (result == 2) {
        std::cout << "User exited.";
    } else {
        std::cout << "user choose: " << result << std::endl;
    }
    return 0;
}
