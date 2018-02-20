#include <iostream>
#include <string>
#include <fstream>

int main()
{
   std::ifstream theFile("players.txt");
   int id;
   std::string name;
   int attack;
   int defense;
   std::string pos;
   std::cout << "Player data:" << std::endl; 
   while (theFile >> id >> name >> attack >> defense >> pos) {
       std::cout << id << std::endl;
       std::cout << "Name: " << name << std::endl;
       std::cout << "Attack: " << attack << std::endl;
       std::cout << "Defense: " << defense << std::endl;
       std::cout << "Position: " << pos << std::endl;
   }
}
