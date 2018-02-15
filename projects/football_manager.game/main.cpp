#include <vector>
#include <iostream>
#include <fstream>
#include "menu.hpp"
#include "menu_item.hpp"
#include "choose_teams.hpp"
#include "choose_player.hpp"
#include "player.hpp"
#include "league.hpp"
#include "game.hpp"
#include "team.hpp"

team read_team() {
    std::string file_name("../../../data/fgd.data");
    std::cout << "Reading file: " << file_name << std::endl;
    std::ifstream input_stream(file_name);
    team t;
    t.read(input_stream);
    std::cout << "Finished reading file: " << file_name << std::endl;
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

std::vector<player> create_players() {
    player De_Gea;
    De_Gea.setup("David De Gea", "Man-Utd", 24, 95, "GK");
    player Blind;
    Blind.setup("Daley Blind", "Man-Utd", 41, 80, "LB");
    player Valencia;
    Valencia.setup("Antonio_Valencia", "Man-Utd", 70, 80, "RB");
    player Lindelof;
    Lindelof.setup("Victor Lindelöf", "Man-Utd", 45, 75, "CB");
    player Jones;
    Jones.setup("Phil Jones", "Man-Utd", 38, 82, "CB");
    player Sanchez;
    Sanchez.setup("Alexis Sanchez", "Man-Utd", 89, 40, "LW");
    player Martial;
    Martial.setup("Anthony Martial", "Man-Utd", 86, 42, "RW");
    player Fellaini;
    Fellaini.setup("Marouane Fellaini", "Man-Utd", 78, 68, "CM");
    player Pogba;
    Pogba.setup("Paul Pogba", "Man-Utd", 89, 75, "CM");
    player Lukaku;
    Lukaku.setup("Romelu Lukaku", "Man-Utd", 84, 40, "CF");
    player Ibrahimovic;
    Ibrahimovic.setup("Zlatan Ibrahimovic", "Man-Utd", 89, 38, "CF");

    // OR
    player De_Gea2;
    De_Gea2.name_ = "David De Gea";
    De_Gea2.team_ = "Man-Utd";
    De_Gea2.attack_ = 24;
    De_Gea2.defense_ = 95;
    De_Gea2.position_ = "GK";

    std::vector<player> players;
    players.push_back(De_Gea);
    players.push_back(Blind);
    players.push_back(Valencia);
    players.push_back(Lindelof);
    players.push_back(Jones);
    players.push_back(Sanchez);
    players.push_back(Martial);
    players.push_back(Fellaini);
    players.push_back(Pogba);
    players.push_back(Lukaku);
    players.push_back(Ibrahimovic);
    // OR
    // players.push_back(De_Gea2);
    return players;
}


std::vector<game> create_game_result() {
   game ManUVChelsea;
   ManUVChelsea.setup("Manchester-United", "Chelsea", 4, 3);
   
   std::vector<game> games;
   games.push_back(ManUVChelsea);
   return games;
}


int main()
{
    // create an instance of the menu class.
    menu main_menu = create_main_menu();
    menu team_menu = create_team_menu();
    //showplayers()

    // "run" it
    int result = main_menu.run();
    if (result == 0 ){
        choose_player();
        int playerChoice;
        std::cout << "Choose a player to see details: ";
        std::cin >> playerChoice;
        std::cout << std::endl;
        std::vector<player> players = create_players();
        players[playerChoice].display();


    }
    // return 0;
    // handle the result of the menu.

    if (result == 1) {
        std::cout << "User chose league information" <<  std::endl;
        //        }
        
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

    return 0;
}
#
