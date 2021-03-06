#include <list>
#include <fstream>
#include <ostream>
#include <algorithm>
#include <iterator>
#include "engine.hpp"
#include "team_management.hpp"
#include "squad.hpp"

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
    for(squad sq : league_.squads()) {
        te.push_back(standings_table_entry(sq.name(), 0, 0, 0, 0, 0));
    }
    standings_table st(te);
    return st;
}

menu engine::create_teams_menu() {
    std::vector<menu_item> items;
    for(squad sq : league_.squads()) {
        items.push_back(menu_item(sq.name()));
    }

    menu m("Squad Menu", "Choose an option: ", items);
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

season engine::create_season_rotate() {
    std::list<std::string> team_names;

    // first we copy across the team names into the list.
    for(squad s : league_.squads()) {
        team_names.push_back(s.name());
    }

    std::cout << "Created list. Size: " << team_names.size()
              << " Contents: " << std::endl;
    for (std::string tn : team_names) {
        std::cout << tn << std::endl;
    }

    const unsigned int total_teams = league_.squads().size();
    const unsigned int total_match_days = total_teams * 2 - 2;
    const unsigned int total_games_in_match_day = total_teams / 2;

    std::vector<match_day> match_days;
    match_days.resize(total_match_days);

    for(unsigned int match_day = 0; match_day < total_match_days; ++match_day) {
        std::cout << "Match day: " << match_day << std::endl;

        std::string home_team;
        std::string away_team;

        std::list<std::string>::iterator home_iterator(team_names.begin());
        std::list<std::string>::reverse_iterator
            away_iterator(team_names.rbegin());

        for(unsigned int game_in_match_day = 0;
            game_in_match_day < total_games_in_match_day;
            ++game_in_match_day) {
            std::cout << "Game in match day: " << game_in_match_day
                      << std::endl;

            home_team = *home_iterator;
            std::cout << "Home team: " << home_team << std::endl;

            away_team = *away_iterator;
            std::cout << "Away team: " << home_team << std::endl;

            match_days[match_day].matches()
                .push_back(match(home_team, 0, away_team, 0, 0));

            ++home_iterator;
            ++away_iterator;
        }

        std::cout << "Before rotate" << std::endl;
        for (std::string tn : team_names) {
            std::cout << tn << std::endl;
        }

        std::string first_team = team_names.front();
        team_names.pop_front();

        std::list<std::string>::iterator middle = team_names.begin();
        std::cout << "Advancing by " << match_day << std::endl;
        std::advance(middle, match_day);

        std::cout << "Rotating" << std::endl;

        std::rotate(team_names.begin(), middle, team_names.end());

        team_names.push_front(first_team);

        std::cout << "After rotate" << std::endl;
        for (std::string tn : team_names) {
            std::cout << tn << std::endl;
        }
    }

    season s(2017, 2018, match_days);
    s.display();
    return s;
}

season engine::create_season() {
    // vector with all of the match days for an entire season.
    std::vector<match_day> match_days;

    unsigned int total_teams = league_.squads().size();

    // we know up front how many match days there are, so create them
    // all empty. Times two because we play home and away. Minus two
    // because a team does not play against itself.
    unsigned int total_match_days = total_teams * 2 - 2;
    match_days.resize(total_match_days);

    // first we loop through all of the squads (clubs, really) in the
    // league. This will generate all of the home games for a given
    // team.
    std::string home_team;
    std::string away_team;
    // unsigned int match_day_displacement = 0;
    for(squad t1 : league_.squads()) {
        home_team = t1.name();
        std::cout << "Home team: " << home_team << std::endl;

        // how we loop through all of the away teams to generate all
        // the home matches for the first team.
        unsigned int i = 0;
        for(squad t2 : league_.squads()) {
            std::cout << "i: " << i << std::endl;
            away_team = t2.name();
            std::cout << "Away team: " << away_team << std::endl;

            // we do not want to consider games where the home team is
            // the same as the away team.
            if (home_team != away_team) {
                // first we need to compute the actual match day in
                // which to place this game. Note that we wrap around
                // when we reach the maximum number of match days in a
                // season.
                unsigned int actual_match_day =
                    (i + total_teams) % total_match_days;

                std::cout << "Actual match day: " << actual_match_day
                          << std::endl;

                match_days[actual_match_day].matches()
                    .push_back(match(home_team, 0, away_team, 0, 0));

                // note that we only increment i if we have a real
                // game (e.g. skip team playing against itself).
                i = i + 1;

                // the displacement shifts teams by a fixed amount. Try
                // playing with values here. For example, see what happens
                // when you subtract -1 instead of -2.
                // match_day_displacement = match_day_displacement + total_teams;
                // std::cout << "Displacement: " << match_day_displacement << std::endl;
            }
        }
    }

    // This attempt sucsessfully splits up multiple matches into day
    // But matches are impossible as 1 team plays multiple matches
    /*for(squad t1 : league_.squads()) {
        team1 = t1.name();
        std::cout << team1;
        std::vector<match> test;
        for(squad t2 : league_.squads()) {
            team2 = t2.name();
            std::cout << team2;
            if (team1 != team2) {
                std::cout << "teams are diff, adding match" << std::endl;
                test.push_back(match(team1,0,team2,0,0));
           }
       }
     match_days.push_back(match_day(test));
     } */

    //WORKING - HARD CODED MATCH FIXTURES
    /*std::vector<match> day1;
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
    match_days.push_back(match_day(day3));*/

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
            std::string team_name = league_.squads()[team_choice].name();

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
menu engine::create_management_menu() {
    std::vector<menu_item> items;
    for (user u : game_.users()) {
        items.push_back(menu_item(u.name() + " -- " + u.team_name()));   
    }

    // for (squad& i:league_.squads) {
    //     i.display();
    // }

    menu m("Users", "Choose an User: ", items);
    return m;
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

bool engine::do_team_management() {
    std::cout << "<<<<Enter selection working>>>>" << std::endl;
    int user_choice;
    do {
        menu m = create_management_menu();
        user_choice = m.run();

        // user has decided to add more users.
        if (user_choice == 0) {
            std::cout << "Adding a new user!" << std::endl;

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
            menu m = create_management_menu();
             m.run();
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
        std::cout << "Creating season" << std::endl;

        // creates season object
        season s = create_season_rotate();

        std::cout << "Starting Season 2017/2018!" << std::endl;
        do_game();
        std::cout << "Thanks for playing the game!" << std::endl;
    } else {
        std::cout << "Thanks for playing the game!" << std::endl;
    }
}
