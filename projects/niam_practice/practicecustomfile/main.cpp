#include <iostream>
#include <string>
#include <fstream>

int main()
{
   std::ifstream theFile("players.txt");
   int id;
   std::string name;
   int rating;
   
   while (theFile >> id >> name >> rating) {
       std::cout << id << ". " << name << ": " << rating << std::endl;
   }
}
