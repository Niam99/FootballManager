#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include <istream> // needed for reading from a stream
#include "player.hpp"

/**
 * Represents a team in some league.
 */
class team {
public:
    /**
     * Creates an empty team.
     */
    team();

    /**
     * Creates a team with a name and with players.
     */
    team(std::string name, std::vector<player> players);

public:
    /**
     * Returns the name of the team.
     */
    std::string name();

    /**
     * Returns the players in the team.
     */
    std::vector<player> players();

public: // reading and writing methods
    void read(std::istream& input_stream);

private: // private properties of team that no one can access
    std::string name_;
    std::vector<player> players_;
};

#endif
