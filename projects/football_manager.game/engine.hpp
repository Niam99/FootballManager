#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "menu.hpp"
#include "game.hpp"
#include "standings_table.hpp"
#include "league.hpp"
#include "season.hpp"
#include "team_management.hpp"

/**
 * @brief Contains all of the game engine logic.
 */
class engine {
public:
    engine();

private:
    /**
     * @brief Reads all of the data model from file.
     */
    league read_league();

    /**
     * @brief Create and Initialise standings table. Must be done
     * after reading the league.
     */
    standings_table create_standings_table();
    season create_season();

    /**
     * @brief Implements the rotation algorithm from this article:
     *
     * @link http://www.cplusplus.com/reference/algorithm/rotate
     */
    season create_season_rotate();

private:
    /**
     * @brief Creates the teams menu. League must have been loaded
     * from file already.
     */
    menu create_teams_menu();

    /**
     * @brief Creates the main menu.
     */
    menu create_main_menu();

    /**
     * @brief Contains all of the logic to add new users, including
     * creating the menu and responding to the user choices.
     *
     * @return This function returns true if the user decided to start
     * the game, and false if the user decided to quit.
     */
    bool do_add_users();

    bool do_team_management();

    /**
     * @brief Creates the in-game menu. This is the menu after the game
     * has started.
     */
    menu create_in_game_menu();

    menu create_management_menu();

    /**
     * @brief Runs the game.
     *
     * @return This function returns true if the user decided to start
     * the game, and false if the user decided to quit.
     */
    void do_game();

    void create_team_management_menu();

public:
    /**
     * @brief Start the game.
     */
    void run();

private:
    game game_;
    league league_;
    team_management teamMan_; 
    standings_table standings_table_;
    season season_;
};

#endif
