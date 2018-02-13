#include <fstream>
#include <iostream>
#include "league.hpp"

/**
 * factory method to read league.
 */
league read_league() {
    std::string file_name("../../data/epl.data");
    std::cout << "Reading file: " << file_name << std::endl;
    std::ifstream input_stream(file_name);
    // if (input_stream) {
    league l;
    l.read(input_stream);
// }
    std::cout << "Finished reading file: " << file_name << std::endl;
    return l;
}

int main() {
    // read the league from file
    league l = read_league();

    std::cout << "Started main program." << std::endl;

    // print its name
    std::cout << "League: " << l.name() << std::endl;

    // print its teams
    for (team t : l.teams()) {
        std::cout << "Team: " << t.name() << std::endl;
        std::cout << "Squad: " << std::endl;
        for (player p : t.players())
            std::cout << "Name: " << p.name()
                      << " Position: " << p.position()
                      << std::endl;
    }

    return 0;
}
