#include "standings_table.hpp" // for test
#include "standings_table_entry.hpp" // for test
#include "engine.hpp"

/**
 * @brief test to make sure displaying the table looks right.
 */
void test_create_table() {
    std::vector<standings_table_entry> t;
    t.push_back(standings_table_entry("Manchester United", 9, 1, 1, 19, 11));
    t.push_back(standings_table_entry("Chelsea", 8, 2, 1, 20, 11));
    t.push_back(standings_table_entry("Liverpool", 4, 3, 4, 12, 11));
    t.push_back(standings_table_entry("Manchester City", 8, 2, 1, 17, 11));
    t.push_back(standings_table_entry("Tottenham Hotspur", 6, 3, 1, 11, 11));

    standings_table st(t);
    st.display();
}

int main() {
    engine e;
    e.run();
    return 0;
}
