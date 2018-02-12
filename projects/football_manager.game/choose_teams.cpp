#include <iostream>
#include <string>
#include<bits/stdc++.h>
//#include "menu.hpp"
#include "choose_teams.hpp"

void choose::choose_teams(){

    choose team_player;
    
    //void choose_teams();
    
    bool teamSelected = false;

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
            std::cout << "\nYou have selected:\n\n" << team[1] << std::endl
            << std::endl;

            team_player.GK = "David de Gea";
            team_player.LB = "Daley Blind";
            team_player.RB = "Antonio Valencia";
            team_player.CB = "Victor Lindelöf";
            team_player.CB2 = "Phil Jones";
            team_player.LW = "Alexis Sánchez";
            team_player.RW = "Anthony Martial";
            team_player.CM = "Marouane Fellaini";
            team_player.CM2 = "Paul Pogba";
            team_player.CF = "Romelu Lukaku";
            team_player.CF2 = "Zlatan Ibrahimovic";
        }

        std::cout << "Squad:\n"
                  << "GK - " << team_player.GK << std::endl
                  << "LB - " << team_player.LB << std::endl
                  << "RB - " << team_player.RB << std::endl
                  << "CB - " << team_player.CB << std::endl
                  << "CB - " <<  team_player.CB2 << std::endl
                  << "LW - " << team_player.LW << std::endl
                  << "RW - " << team_player.RW << std::endl
                  << "CM - " << team_player.CM << std::endl
                  << "CM - " << team_player.CM2 << std::endl
                  << "CF - " << team_player.CF << std::endl
                  << "CF - " << team_player.CF2 << std::endl;

        std::cout << "\nConfirm Selected team?" << std::endl;

        std::cout << "[0] Yes\n[1] No" << std::endl;
            std::cin >> selection;

            if (selection == 0) {
                teamSelected = true;
                //return;
            }

            if (selection == 1) {
                continue;
            }
    }
}
