#include <iostream>
#include <string>
#include "players.hpp"

void players::setup() {
    players De_Gea;
    De_Gea.name = "David De Gea";
    De_Gea.team = "Man-Utd";
    De_Gea.attack = 24;
    De_Gea.defense = 95;
    De_Gea.position = "GK";
    std::cout << "test" << std::endl;
}

void players::display() {
    std::cout << De_Gea.position << "-" << De_Gea.name << std::endl;
}
