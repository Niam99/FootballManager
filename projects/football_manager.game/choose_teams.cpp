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
    //void choose_teams();
    
    bool teamSelected = false;
    bool teamConfirmed = false;

    while (teamSelected == false) {
        std::vector <std::string> team;
        int selection;
        std::cout << "\nTeams:" << std::endl << std::endl;
        
        team.push_back("BLANK");
        
        team.push_back ("Manchester-United");
        team.push_back("Chelsea");
        team.push_back("Arsenal");
        team.push_back("Manchester-City");
        team.push_back("Liverpool");

        for (int i=1; i<team.size(); i++) {
        std::cout<< "[" << i << "] " << team[i] << "\n";

        }
        
        std::cout << "Choose a team: ";
        std::cin >> selection;

        // create an instance of the menu class.
        //menu main_menu = choose_teams();
        //showplayers()

        // "run" it
        //int result = main_menu.run();

        if (selection == 1){
            std::cout << "\nYou have selected:\n\n" << team[1]
            << std::endl;

            choose_player();

            // team_player.GK = "David de Gea";
            // team_player.LB = "Daley Blind";
            // team_player.RB = "Antonio Valencia";
            // team_player.CB = "Victor Lindelöf";
            // team_player.CB2 = "Phil Jones";
            // team_player.LW = "Alexis Sánchez";
            // team_player.RW = "Anthony Martial";
            // team_player.CM = "Marouane Fellaini";
            // team_player.CM2 = "Paul Pogba";
            // team_player.CF = "Romelu Lukaku";
            // team_player.CF2 = "Zlatan Ibrahimovic";
        }

        // std::cout << "Squad:\n"
        //           << "GK - " << team_player.GK << std::endl
        //           << "LB - " << team_player.LB << std::endl
        //           << "RB - " << team_player.RB << std::endl
        //           << "CB - " << team_player.CB << std::endl
        //           << "CB - " <<  team_player.CB2 << std::endl
        //           << "LW - " << team_player.LW << std::endl
        //           << "RW - " << team_player.RW << std::endl
        //           << "CM - " << team_player.CM << std::endl
        //           << "CM - " << team_player.CM2 << std::endl
        //           << "CF - " << team_player.CF << std::endl
        //           << "CF - " << team_player.CF2 << std::endl;

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
