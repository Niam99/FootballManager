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


    // std::string lastFile;

    // if (fileNum == 1){
    //     std::string file_name("../../../data/afcb.data");
    //     std::ifstream input_stream(file_name.c_str());

    //     for(int i = 0; i < 11; ++i){
    //         std::getline(input_stream, name_);
    //     }

    //     input_stream >> name_;
    // }

    // if (fileNum == 2){
    //     std::string file_name("../../../data/ars.data");
    //     std::ifstream input_stream(file_name.c_str());

    //     for(int i = 0; i < 11; ++i){
    //         std::getline(input_stream, name_);
    //     }

    //     lastFile = "../../../data/afcb.data";

    //     input_stream >> name_;

    // }

    // if (fileNum == 3){
    //     std::string file_name("../../../data/bhalbion.data");
    //     std::ifstream input_stream(file_name.c_str());

    //     for(int i = 0; i < 11; ++i){
    //         std::getline(input_stream, name_);
    //     }

    //     input_stream >> name_;

    // }

    league l = read_league_for_table();
    int place = 1;
    std::cout << "  | W | L | D | English Premier League" << std::endl;
    for (team t : l.teams()) {
        std::cout << place << " | " << t.number_of_wins << " | / | / | "
                  << t.name() << ".....[0]" << std::endl;
        place++;
    }

    //grabTeamScore();
}

void table::grabTeamScore(){

    // std::string testString = "../../../data/afcb.data";

    // if (fileNum == 1){
    //     std::string file_name(testString);
    //     std::ifstream input_stream(file_name.c_str());

    //     for(int i = 0; i < 13; ++i){
    //         std::getline(input_stream, points_);
    //     }

    //     input_stream >> points_;
    // }

    // if (fileNum == 2){
    //     std::string file_name("../../../data/ars.data");
    //     std::ifstream input_stream(file_name.c_str());

    //     for(int i = 0; i < 13; ++i){
    //         std::getline(input_stream, points_);
    //     }

    //     input_stream >> points_;
    // }

    // if (fileNum == 3){
    //     std::string file_name("../../../data/bhalbion.data");
    //     std::ifstream input_stream(file_name.c_str());

    //     for(int i = 0; i < 13; ++i){
    //         std::getline(input_stream, points_);
    //     }

    //     input_stream >> points_;
    // }

    // std::cout << fileNum <<" | " << name_ << ".......[" << points_ << "]"
    //           << std::endl;

    // fileNum += 1;

    // if (fileNum < 4){
    //     grabTeamName();
    // }

}
