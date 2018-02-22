#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <istream>

class player {
public:
    player();
    player(std::string name, std::string position);

public:
    std::string name();
    std::string position();

public:
    void read(std::istream& input_stream);

private:
    std::string name_;
    std::string position_;
};

#endif
