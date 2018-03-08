#include <iostream>
#include <string>
#include "standings_table.hpp"

standings_table::standings_table() {}

standings_table::standings_table(std::vector<standings_table_entry> table) {
    table_ = table;
}

void standings_table::display() {
    std::cout << "          Club            |    W   |    L    |    D    |"
              << "Pts    |   MP   |"
              << std::endl;

    for (standings_table_entry& i:table_) {
        i.display();
    }
}
