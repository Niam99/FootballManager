#include <iostream>
#include <string>
#include <fstream>
#include <istream>
#include "players.hpp"

void player::readPlayerStats() {
   std::ifstream theFile("players.txt");
   std::string name;
   int rating;
   std::cout << "Player data:" << std::endl; 
   while (theFile >> name >> rating) {
       std::cout << "Name: " << name << std::endl;
       std::cout << "Rating: " << rating << std::endl;
   }
}
