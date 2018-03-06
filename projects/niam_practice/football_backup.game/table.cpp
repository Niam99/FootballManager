#include <iostream>
#include <string>
#include <fstream>
#include "table.hpp"
#include "team.hpp"
#include "league.hpp"

league read_league_for_table() {
    std::string file_name("../../../data/epl.data");
    std::cout << "Reading file: " << ("../../../data/epl.data") << std::endl;
    std::ifstream input_stream("../../../data/epl.data");
    league l;
    l.read(input_stream);
    std::cout << "Finished reading file: " << file_name << std::endl;
    return l;
}

void table::grabTeamName(){

    // league l = read_league_for_table();
    // int place = 1;
    // std::cout << "\n\n  | W | L | D | English Premier League" << std::endl;
    // for (team t : l.teams()) {
    //     std::cout << place << " | "
    //               << t.number_of_wins << " | "
    //               << t.number_of_losses << " | "
    //               << t.number_of_draws << " | "
    //               << t.name() << ".....["
    //               << (t.number_of_wins * 3) + t.number_of_draws  << "]"
    //               << std::endl;
    //     place++;
    // }
}

void table::grabTeamScore(){

  
}
