#include <vector>
#include <iostream>
#include <fstream>
#include <ostream>
#include "menu.hpp"
#include "menu_item.hpp"
#include "player.hpp"
#include "league.hpp"
#include "game.hpp"
#include "team.hpp"
#include "table.hpp"

team read_team() {
    std::string file_name("../../../data/fgd.data");
    //std::cout << "Reading file: " << file_name << std::endl;
    std::ifstream input_stream(file_name.c_str());
    team t;
    t.read(input_stream);
    //std::cout << "Finished reading file: " << file_name << std::endl;
    return t;
}

team chooseTeam() {
    std::string file_name("../../../data/fgd.data");
    std::ifstream input_stream(file_name.c_str());
    team t;
    t.chooseTeam(input_stream);

    if (t.carrySelection == 0){
        std::string file_name("../../../data/ars.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 1){
        std::string file_name("../../../data/afcb.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 2){
        std::string file_name("../../../data/bhalbion.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 3){
        std::string file_name("../../../data/burn.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 4){
        std::string file_name("../../../data/che.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 5){
        std::string file_name("../../../data/pal.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 6){
        std::string file_name("../../../data/eve.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 7){
        std::string file_name("../../../data/hud.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 8){
        std::string file_name("../../../data/lei.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 9){
        std::string file_name("../../../data/liv.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 10){
        std::string file_name("../../../data/manc.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 11){
        std::string file_name("../../../data/manu.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 12){
        std::string file_name("../../../data/new.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 13){
        std::string file_name("../../../data/sot.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 14){
        std::string file_name("../../../data/sto.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 15){
        std::string file_name("../../../data/swa.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 16){
        std::string file_name("../../../data/tot.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 17){
        std::string file_name("../../../data/wat.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 18){
        std::string file_name("../../../data/wba.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    if (t.carrySelection == 19){
        std::string file_name("../../../data/whu.data");
        std::ifstream input_stream(file_name.c_str());
        player p;
        p.readPlayer(input_stream);
        // return p;
    }

    return t;
}

menu create_main_menu() {
    std::vector<menu_item> items;

    menu_item players;
    players.setup("View Players");
    items.push_back(players);

    menu_item league;
    league.setup("League Information");
    items.push_back(league);

    menu_item teams;
    teams.setup("Teams");
    items.push_back(teams);
    
    menu_item results;
    results.setup("View results of played games");
    items.push_back(results);

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

std::vector<game> create_game_result() {
   game ManUVChelsea;
   ManUVChelsea.setup("Manchester-United", "Chelsea", 4, 3);
   
   std::vector<game> games;
   games.push_back(ManUVChelsea);
   return games;
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

// player read_player() {
    
//         std::string file_name("../../../data/manu.data");
//         std::ifstream input_stream(file_name.c_str());
//         player p;
//         p.readPlayer(input_stream);
//         return p;
// }

player choosePlayer() {
    std::string file_name("../../../data/manu.data");
    std::ifstream input_stream(file_name.c_str());
    player p;
    p.choosePlayer(input_stream);
    return p;
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
        //read_player();
        choosePlayer();

    }
    // return 0;
    // handle the result of the menu.

    if (result == 1) {
        std::cout << "User chose league information" <<  std::endl;
        std::cout << "League: " << l.name() << std::endl;

        table tab;
        tab.grabTeamName();
 
    }
    if (result == 2) {
        // std::cout << "User chose Teams" << std::endl;
        // choose team;
        // team.choose_teams();

        read_team();
    }
    
    if (result == 3) {
        std::cout << "User chose to view game results" << std::endl;
        std::vector<game> games = create_game_result();
        for (int i = 0; i < games.size(); ++i){
            games[i].display();
            std::cout << std::endl;
         }
    } 

    if (result == 4) {
        std::cout << "User Exited" << std::endl;
        create_team_menu();
    } 

    chooseTeam();

    //read_player();
    
    return 0;
}
