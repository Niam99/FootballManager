#ifndef TABLE_HPP
#define TABLE_HPP

#include <string>
#include <istream>

class table {
public:

    void grabTeamName();
    void grabTeamScore();

    std::string points_;
    std::string name_;
    int position = 20;
    int fileNum = 1;
};

#endif
