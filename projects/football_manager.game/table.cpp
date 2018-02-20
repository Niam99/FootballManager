#include <iostream>
#include <string>
#include <fstream>
#include "table.hpp"

void table::grabTeamName(){
    
    std::cout << "/ / HERES THE TABLE / /"
              << std::endl << std::endl;
    if (fileNum == 1){
        std::string file_name("../../../data/afcb.data");
        std::ifstream input_stream(file_name.c_str());

        for(int i = 0; i < 11; ++i){
            std::getline(input_stream, name_);
        }

        input_stream >> name_;
    }

    if (fileNum == 2){
        std::string file_name("../../../data/ars.data");
        std::ifstream input_stream(file_name.c_str());

        for(int i = 0; i < 11; ++i){
            std::getline(input_stream, name_);
        }

        input_stream >> name_;

    }

    if (fileNum == 3){
        std::string file_name("../../../data/bhalbion.data");
        std::ifstream input_stream(file_name.c_str());

        for(int i = 0; i < 11; ++i){
            std::getline(input_stream, name_);
        }

        input_stream >> name_;

    }
   
    //std::getline(input_stream, name_);
    // std::cout << "\nPlayers" << std::endl;
    // for(int i = 0; i < 11; ++i){
    //         std::getline(input_stream, name_);
    // }

    //input_stream >> name_;

    grabTeamScore();
}

void table::grabTeamScore(){

    if (fileNum == 1){
        std::string file_name("../../../data/afcb.data");
        std::ifstream input_stream(file_name.c_str());
    
        for(int i = 0; i < 13; ++i){
            std::getline(input_stream, points_);
        }

        input_stream >> points_;
    }

    if (fileNum == 2){
        std::string file_name("../../../data/ars.data");
        std::ifstream input_stream(file_name.c_str());

        for(int i = 0; i < 13; ++i){
            std::getline(input_stream, points_);
        }

        input_stream >> points_;
    }

    if (fileNum == 3){
        std::string file_name("../../../data/bhalbion.data");
        std::ifstream input_stream(file_name.c_str());

        for(int i = 0; i < 13; ++i){
            std::getline(input_stream, points_);
        }

        input_stream >> points_;
    }

// for(int i = 0; i < 13; ++i){
    //     std::getline(input_stream, points_);
    // }

    // input_stream >> points_;

    std::cout << fileNum <<" | " << name_ << ".......[" << points_ << "]"
              << std::endl;

    fileNum += 1;
    
    if (fileNum < 4){
        grabTeamScore();
    }

//input_stream >> name_;
    //input_stream >> points_;
}

// void table::createTable(){

//     std::cout << "1 | " << name_ << ".......[" << points_ << "]"
//               << std::endl;
//     grabTeamScore();
// }
