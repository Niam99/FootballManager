#include <iostream>
#include <string>
#include "player.hpp"

void player::setup(std::string name, std::string team, int attack, int defense,
    std::string position) {

    name_ = name;
    team_ = team;
    attack_ = attack;
    defense_ = defense;
    position_ = position;
}

void player::display() {
    // std::cout << De_Gea.position << "-" << De_Gea.name << std::endl;
}
