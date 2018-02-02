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
    player Daley_Blind;
    Daley_Blind.setup("Daley Blind", "Manu-Utd", 41, 80, "CB");

    // OR
    player De_Gea2;
    De_Gea2.name_ = "David De Gea";
    De_Gea2.team_ = "Man-Utd";
    De_Gea2.attack_ = 24;
    De_Gea2.defense_ = 95;
    De_Gea2.position_ = "GK";

    std::vector<player> players;
    players.push_back(De_Gea);
    players.push_back(Daley_Blind);
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
        //choose_teams();
        choose_player();
        int playerChoice;
        std::cout << "Choose a player to see details: ";
        std::cin >> playerChoice;
        std::cout << std::endl;
        std::vector<player> players = create_players();
        players[playerChoice].display();

        //for (int i = 0; i < players.size(); ++i){
        //    players[i].display();
        //    std::cout << std::endl;
        // }

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

    if (result == 3) {
        std::cout << "This is working!" << std::endl;
        choose_teams();
    } else {
        std::cout << "user choose: " << result << std::endl;
    }
    return 0;
}
