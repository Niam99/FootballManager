cmake_minimum_required(VERSION 2.8.9)
project(football_manager.game)
set(CMAKE_CXX_STANDARD 11)
add_executable(football_manager.game
  main.cpp
  menu.cpp
  menu_item.cpp
  player.cpp
  team.cpp
  league.cpp
  standings_table_entry.cpp
  standings_table.cpp
  match.cpp
  match_day.cpp
  engine.cpp
  game.cpp
  user.cpp
  season.cpp)
