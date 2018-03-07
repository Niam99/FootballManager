#include <vector>
#include <iostream>
#include <fstream>
#include <ostream>
#include "menu.hpp"
#include "menu_item.hpp"
#include "player.hpp"
#include "league.hpp"
#include "team.hpp"
#include "standings_table_entry.hpp"
#include "standings_table.hpp"

menu create_main_menu() {
    std::vector<menu_item> items;
    
    menu_item results;
    results.setup("View table");
    items.push_back(results);

    menu_item league;
    league.setup("View League info");
    items.push_back(league);

    menu_item teams;
    teams.setup("League teams");
    items.push_back(teams);

    menu_item players;
    players.setup("players");
    items.push_back(players);

    menu_item quit;
    quit.setup("Quit");
    items.push_back(quit);

    menu main_menu;
    main_menu.setup("Main Menu", "Choose an option: ", items);
    return main_menu;
}

menu create_team_menu() {
    std::vector<menu_item> items;

    menu_item man_u;
    man_u.setup("Manchester-United");
    items.push_back(man_u);

    menu_item che;
    che.setup("Chelsea");
    items.push_back(che);

    menu_item liv;
    liv.setup("Liverpool");
    items.push_back(liv);

    menu team_menu;
    team_menu.setup("Team Menu", "Choose an Team: ", items);
    return team_menu;
}

league read_league() {
    std::string file_name("../../../data/epl.data");
    std::cout << "Reading file: " << ("../../../data/epl.data") << std::endl;
    std::ifstream input_stream("../../../data/epl.data");
    league l;
    l.read(input_stream);
    std::cout << "Finished reading file: " << file_name << std::endl;
    return l;
}

standings_table create_table() {
    std::vector<standings_table_entry> t;
    standings_table_entry manu("Man-United", 9, 1, 1, 19, 11);
    t.push_back(manu);
    standings_table_entry chel("Chelsea   ", 8, 2, 1, 20, 11);
    t.push_back(chel);
    standings_table_entry liv("Liverpool ", 4, 4, 4, 12, 12);
    t.push_back(liv);
    standings_table_entry mcity("Man-City  ", 8, 2, 1, 17, 11);
    t.push_back(mcity);
    standings_table_entry tots("Tottenham ", 6, 3, 1, 11, 11);
    t.push_back(tots);
    standings_table st(t);
    st.display();
}

int main()
{   
    // create an instance of the menu class.
    menu main_menu = create_main_menu();
    menu team_menu = create_team_menu();
    //showplayers()
    league l = read_league();

    // "run" it
    int result = main_menu.run();
    if (result == 0 ){
        std::cout << "User viewing table." << std::endl;
        standings_table table_ = create_table();
    }
    // return 0;
    // handle the result of the menu.

    if (result == 1) {
        //league l = read_league();
        std::cout << "User chose league information" <<  std::endl;
        std::cout << "League: " << l.name() << std::endl;
        for (team t : l.teams()) {
        std::cout << "Team: " << t.name() << std::endl;
        std::cout << "Squad: " << std::endl;
        for (player p : t.players())
            std::cout << "Name: " << p.name() << std::endl
                      << " Position: " << p.position()
                      << std::endl;
    }



 
    }
    if (result == 2) {
        std::cout << "user chose to view teams" << std::endl;
        for (team t : l.teams()) {
        std::cout << "Team: " << t.name() << std::endl;
        }
    }
    
    if (result == 3) {
        std::cout << "User chose to view game results" << std::endl;
        
    } 

    if (result == 4) {
        std::cout << "User Exited" << std::endl;
        create_team_menu();
    } 

    return 0;
}
