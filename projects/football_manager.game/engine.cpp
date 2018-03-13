#include <fstream>
#include <ostream>
#include "engine.hpp"
#include "team_management.hpp"

engine::engine() {}

league engine::read_league() {
    std::string file_name("../../../data/epl.data");
    std::cout << "Reading file: " << file_name << std::endl;
    std::ifstream input_stream(file_name.c_str());
    league l;
    l.read(input_stream);
    std::cout << "Finished reading file: " << file_name << std::endl;
    return l;
}

standings_table engine::create_standings_table() {
    std::vector<standings_table_entry> te;
    for(team t : league_.teams()) {
        te.push_back(standings_table_entry(t.name(), 0, 0, 0, 0, 0));
    }
    standings_table st(te);
    return st;
}

menu engine::create_teams_menu() {
    std::vector<menu_item> items;
    for(team t : league_.teams()) {
        items.push_back(menu_item(t.name()));
    }

    menu m("Team Menu", "Choose an option: ", items);
    return m;
}

menu engine::create_main_menu() {
    std::vector<menu_item> items;
    items.push_back(menu_item("Add users"));
    items.push_back(menu_item("Start game"));
    items.push_back(menu_item("Quit game"));

    menu m("Main Menu", "Choose an option: ", items);
    return m;
}


season engine::create_season() {
    std::vector<match_day> match_days;
    team t;
    
    //WORKING - HARD CODED MATCH FIXTURES
    std::vector<match> day1;
    day1.push_back(match("Manchester-United", 0,"Liverpool",0,0));
    day1.push_back(match("Chelsea", 0,"Arsenal",0,0));
    day1.push_back(match("Tottenham Hotspur", 0,"Everton",0,0));
    match_days.push_back(match_day(day1));

    std::vector<match> day2;
    day2.push_back(match("Liverpool", 0,"Manchester United",0,0));
    day2.push_back(match("Arsenal", 0,"Chelsea",0,0));
    day2.push_back(match("Everton", 0,"Tottenham Hotspur",0,0));
    match_days.push_back(match_day(day2));

    std::vector<match> day3;
    day3.push_back(match("Manchester City", 0,"Manchester United",0,0));
    day3.push_back(match("Leicester City", 0,"Chelsea",0,0));
    day3.push_back(match("Arsenal", 0,"Tottenham Hotspur",0,0));
    match_days.push_back(match_day(day3));
    
    
    //NOT WORKING
   /* for(team t : league_.teams()) {
        bool diff_team = false;
        std::string team1;
        std::string team2;
        do {
            team1 = t.name();
            team2 = t.name();
            if (team1 != team2) {
                diff_team = true;
            }
        } while (diff_team == false);
        std::vector<match> test;
        test.push_back(match(team1,0,team2,0,0));
        match_days.push_back(match_day(test));
    } */
    
    //NOT WORKING
    /*std::string team1;
    std::string team2;
    bool diff_team = false;
    do {
        std::string team1;
        std::string team2;
        for(team t : league_.teams()) {
            team1 = t.name();
        }
        for(team t : league_.teams()) {
            team2 = t.name();
        }
        if (team1 != team2) {
                diff_team = true;
        }
    } while (diff_team == false);
    std::vector<match> test;
    test.push_back(match(team1,0,team2,0,0));
    match_days.push_back(match_day(test)); */

    season s(2017, 2018, match_days);
    s.display();
    return s;
}

bool engine::do_add_users() {
    // print a basic blurb explaining what the game is about.
    std::cout << "Welcome to Football Manager!" << std::endl << std::endl
              << "Football Manager is a simple console based " << std::endl
              << "football managing game. Add users and then" << std::endl
              << "start the game!" << std::endl << std::endl;


    // now run the adding users logic. We need to loop whilst there
    // are more users to add. We finish the loop when the user decides
    // to start the game or quit.
    int user_choice;
    do {
        menu m = create_main_menu();
        user_choice = m.run();

        // user has decided to add more users.
        if (user_choice == 0) {
            std::cout << "Adding a new user!" << std::endl
                      << "At the moment we have the following users: ("
                      << game_.users().size() << "):"
                      << std::endl << std::endl;

            // display all the setup users in the game so far.
            for (user u : game_.users()) {
                u.display();
            }

            // read the user name from the user. note that we are not
            // checking that the user name is new - we should not
            // allow the same user name twice really.
            std::cout << std::endl << "New user name: " << std::endl;
            std::string user_name;
            std::cin >> user_name;

            // now we need to show a menu of all the available teams
            // to the user.
            //
            // note that we are not removing teams which have already
            // been chosen by other users. this is a bug because we
            // cannot have two users managing the same team.
            std::cout << "Now choose a team!" << std::endl;
            menu tm = create_teams_menu();
            int team_choice = tm.run();

            // the user has chosen a team in the menu, now we need to
            // figure out which team corresponds to this number.
            std::string team_name = league_.teams()[team_choice].name();

            // finally we can create a new user and add it to the
            // game.
            user u(user_name, team_name);
            game_.users().push_back(u);
        } else if (user_choice == 2) {
            // if the user decides to quit, we should make sure its not a
            // mistake.
            std::cout << "Are you sure you want to quit? Y/N" << std::endl;
            std::string quit;
            std::cin >> quit;

            if (quit == "Y" || quit == "y") {
                // user has confirmed they wanted to quit.
                return false;
            } else
                return true;
        }
    } while (user_choice == 0);
    return true;
}

menu engine::create_in_game_menu() {
    std::vector<menu_item> items;
    items.push_back(menu_item("Play next game"));
    items.push_back(menu_item("See standings"));
    items.push_back(menu_item("Team Management"));
    items.push_back(menu_item("Quit game"));

    menu m("In game Menu", "Choose an option: ", items);
    return m;
}

void engine::do_game() {
    // now run the game logic. We need to loop forever until the user
    // decides to quit.
    int user_choice;
    bool quit_choice;
    do {
        std::cout << "here!" << std::endl;
        menu m = create_in_game_menu();
        user_choice = m.run();

        if (user_choice == 0) {
            std::cout << "Playing next game!" << std::endl;
            // FIXME: add logic to play a game.
            continue;
        } else if (user_choice == 1) {
            // user wants to see the table.
            standings_table_.display();
            continue;
        } else if (user_choice == 2) {
            std::cout << "Team Management" << std::endl;

            team_management t;
            t.display();

            //user uD;
            //uD.display();
            //std::cout << game_.users().size() << std::endl;
            continue;
        } else if (user_choice == 3) {
            // if the user decides to quit, we should make sure its not a
            // mistake.
            std::cout << "Are you sure you want to quit? Y/N" << std::endl;
            std::string quit;
            std::cin >> quit;

            if (quit == "Y" || quit == "y") {
                // user has confirmed they wanted to quit.
                quit_choice = true;
            } else {
                quit_choice = false;
            }
        }
        std::cout << "here2!" << std::endl;
    } while (quit_choice == false);
}
void engine::run() {
    // first we read all our team data.
    league_ = read_league();

    // then we can initialise our standings table.
    standings_table_ = create_standings_table();

    // then we need to compute all of the matches (who will be playing
    // against who)
    // FIXME: not done

    bool start_game = do_add_users();

    if (start_game) {
        std::cout << "CREATING SEASON" << std::endl;

        // creates season object
        season s = create_season();

        std::cout << "Starting Season 2017/2018!" << std::endl;
        do_game();
        std::cout << "Thanks for playing the game!" << std::endl;
    } else {
        std::cout << "Thanks for playing the game!" << std::endl;
    }
}
