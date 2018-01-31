#include <iostream>
#include <string>
#include<bits/stdc++.h>
#include "choose_teams.hpp"

void choose_teams(){

    bool teamSelected = false;

    while (teamSelected == false) {
        //std::vector <std::string> team;
        int selection;
        std::cout << "\nTeams:" << std::endl << std::endl;

        //team_menu team;
        //.setup("BLANK");
        //.pushback(team);
        
        //team.push_back ("Manchester-United");
        //team.push_back("Chelsea");
        //team.push_back("Arsenal");
        //team.push_back("Manchester-City");
        //team.push_back("Liverpool");

        // for (int i=1; i<team.size(); i++) {
        // std::cout<< "[" << i << "] " << team[i] << "\n";

        // }

        std::cout << "Choose a team: ";
        std::cin >> selection;

        if (selection == 1){
            // std::cout << "\nYou have selected:\n\n" << team[1] << std::endl
            //<< std::endl;

            std::cout << "Squad:\n"
                      << "GK - David de Gea\n"
                      << "LB - Daley Blind\n"
                      << "RB - Antonio Valencia\n"
                      << "CB - Victor Lindelöf\n"
                      << "CB - Phil Jones\n"
                      << "LW - Alexis Sánchez\n"
                      << "RW - Anthony Martial\n"
                      << "CM - Marouane Fellaini\n"
                      << "CM - Paul Pogba\n"
                      << "CF - Romelu Lukaku\n"
                      << "CF - Zlatan Ibrahimovic\n" << std::endl;

            //std::cout << "Confirm " << team[1] << "?" << std::endl;
            std::cout << "[0] Yes\n[1] No" << std::endl;
            std::cin >> selection;

            if (selection == 0) {
                teamSelected = true;
                return;
            }

            if (selection == 1) {
                continue;
            }
        }
    }
}
