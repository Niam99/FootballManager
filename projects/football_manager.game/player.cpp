#include <iostream>
#include <string>
#include "player.hpp"

void players::setup(std::string name, std::string team, int attack, int defense,
    std::string position) {

    name_ = name;
    team_ = team;
    attack_ = attack;
    defense_ = defense;
    position_ = position;
}

void players::display() {
    // std::cout << De_Gea.position << "-" << De_Gea.name << std::endl;
}
