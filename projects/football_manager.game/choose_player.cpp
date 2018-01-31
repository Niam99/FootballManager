#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "choose_player.hpp"

void choose_player() {

    bool playerSelected = false;

    while (playerSelected == false) {
        std::vector <std::string> player;
        int selection;
        std::cout << std::endl;
        std::cout << "Players in this team:" << std::endl << std::endl;

        player.push_back("BLANK");
        player.push_back("GK - David de Gea");
        player.push_back("LB - Daley Blind");
        player.push_back("RB - Antonio Valencia");
        player.push_back("CB - Victor Lindelöf");
        player.push_back("CB - Phil Jones");
        player.push_back("LW - Alexis Sánchez");
        player.push_back("RW - Anthony Martial");
        player.push_back("CM - Marouane Fellaini");
        player.push_back("CM - Paul Pogba");
        player.push_back("CF - Romelu Lukaku");
        player.push_back("CF - Zlatan Ibrahimovic");

        for (int i=1; i<player.size(); i++) {
            std::cout << "[" << i << "] " << player[i] << std::endl;
        }

        std::cout << "Choose a player: ";
        std::cin >> selection;
        int a = selection;

        if (selection == a){
            std::cout << "You chose " << player[a] << std::endl;
            playerSelected = true;
        } else {
            std::cout << "try again" << std::endl;
        }
    }
}
