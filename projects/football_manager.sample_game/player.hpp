#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <istream> // needed for reading from a stream

/**
 * Represents a player in a team.
 */
class player {
public:
    /**
     * Creates an empty player.
     */
    player();

    /**
     * Creates a player with a name and with position.
     */
    player(std::string name, std::string position);

public:
    /**
     * Returns the name of the player.
     */
    std::string name();

    /**
     * Returns the players position.
     */
    std::string position();

public: // reading and writing methods
    void read(std::istream& input_stream);

private: // private properties of player that no one can access
    std::string name_;
    std::string position_;
};

#endif
