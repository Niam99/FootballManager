#include <iostream>
#include <string>
#include<bits/stdc++.h>
//#include "menu.hpp"
#include "choose_teams.hpp"
#include "choose_player.hpp"
#include "player.hpp"

std::vector<player> create_players_2() {
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

void choose::choose_teams(){

    choose team_player;
    int playerChoice;

    bool teamSelected = false;
    bool teamConfirmed = false;

    while (teamSelected == false) {
        int selection;
        std::cout << "\nTeams:" << std::endl << std::endl;

        team_player.team.push_back("BLANK");
        team_player.team.push_back ("Manchester-United");
        team_player.team.push_back("Chelsea");
        team_player.team.push_back("Arsenal");
        team_player.team.push_back("Manchester-City");
        team_player.team.push_back("Liverpool");

        for (int i=1; i<team_player.team.size(); i++) {
            std::cout<< "[" << i << "] " << team_player.team[i] << "\n";

        }

        std::cout << "Choose a team: ";
        std::cin >> selection;

        // create an instance of the menu class.
        //menu main_menu = choose_teams();
        //showplayers()

        // "run" it
        //int result = main_menu.run();

        if (selection == 1){
            std::cout << "\nYou have selected:\n\n" << team_player.team[1]
            << std::endl;

            choose_player();
        }

        while (teamConfirmed == false){

            std::cout << "\nSelect Option:" << std::endl;

            std::cout << "[0] View Player\n[1] Confirm Team\n[2] Back" << std::endl;
            std::cin >> selection;

            if (selection == 0) {
                std::cout << "Choose a player to see details: ";
                std::cin >> playerChoice;
                std::cout << std::endl;
                std::vector<player> players = create_players_2();
                players[playerChoice].display();
            }

            if (selection == 1) {
                teamConfirmed = true;
                teamSelected = true;
            }

            if (selection == 2) {
                break;
                continue;
            }
        }
    }
}
