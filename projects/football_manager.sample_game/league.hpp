#ifndef LEAGUE_HPP
#define LEAGUE_HPP

#include <string>
#include <vector>
#include <istream> // needed for reading from a stream
#include "team.hpp"

/**
 * Represents a league in some country.
 */
class league {
public:
    /**
     * Creates an empty league.
     */
    league();

    /**
     * Creates a team with a name and with teams.
     */
    league(std::string name, std::vector<team> teams);

public:
    /**
     * Returns the name of the league.
     */
    std::string name();

    /**
     * Returns the teams in the league.
     */
    std::vector<team> teams();

public: // reading and writing methods
    void read(std::istream& input_stream);


private: // private properties of league that no one can access
    std::string name_;
    std::vector<team> teams_;
};

#endif
