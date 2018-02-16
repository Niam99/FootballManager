#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <istream>
#include "team.hpp"

class player {
public:
    player();
    player(std::string name, int rating);

public:
    void readPlayer(std::istream& input_stream);
    void choosePlayer(std::istream& input_stream);

    std::string playerName();
    int playerRating ();

private:
    std::string name_;
    int rating_;
};

#endif
