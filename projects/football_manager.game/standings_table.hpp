#ifndef STANDINGS_TABLE_HPP
#define STANDINGS_TABLE_HPP

#include <iostream>
#include <string>
#include <vector>
#include "standings_table_entry.hpp"

class standings_table {
public:
    void setup(std::vector<standings_table_entry> table);

private:
    std::vector<standings_table_entry> table_;
};

#endif
