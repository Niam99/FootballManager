#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <string>
#include <vector>
#include <istream>
#include "player.hpp"

class squad {
public:
    squad();
    squad(std::string name, std::vector<player> players);

public:
    std::string name();
    std::vector<player> players();

public:
    void read(std::istream& input_stream);

private:
    std::string name_;
    std::vector<player> players_;
};

#endif
