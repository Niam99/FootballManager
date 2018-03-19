cmake_minimum_required(VERSION 2.8.9)
project(football_manager.game)
set(CMAKE_CXX_STANDARD 11)

# enable as many warnings as possible
set(warning_flags "-Wall -Wextra")

if (CMAKE_COMPILER_IS_GNUCXX)
  set(warning_flags "${warning_flags} -Wno-maybe-uninitialized")
endif()

if (CMAKE_COMPILER_IS_CLANGXX)
  # disable mismatched tags as there are STL inconsistencies that
  # make it a bit useless.
  set(warning_flags "${warning_flags} -Wno-mismatched-tags")
  if(CCACHE_PROGRAM)
    # CCache and Clang don't seem to play nice when it comes
    # to unused arguments.
    set(warning_flags "${warning_flags} -Qunused-arguments")
  endif()
endif()

# issue all the warnings demanded by strict iso c and iso c++
set(warning_flags "${warning_flags} -pedantic")

# treat warnings as errors
set(warning_flags "${warning_flags} -Werror")

# do not issue warnings for system headers
set(warning_flags "${warning_flags} -Wno-system-headers")

# overloaded virtual function has a different signature
set(warning_flags "${warning_flags} -Woverloaded-virtual")

# make string constants const char*
set(warning_flags "${warning_flags} -Wwrite-strings")

# enable RTTI
# -fvisibility=hidden
add_definitions(-D_GLIBCXX_USE_CXX11_ABI=1)
set(CMAKE_CXX_STANDARD 14)
set(other_flags "${other_flags} -frtti -fvisibility-inlines-hidden")
set(other_flags "${other_flags} -fvisibility=default")

# set the flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${optimisation_flags}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${warning_flags}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${profiling_flags}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${other_flags}")

add_executable(football_manager.game
  main.cpp
  menu.cpp
  menu_item.cpp
  player.cpp
  squad.cpp
  league.cpp
  standings_table_entry.cpp
  standings_table.cpp
  match.cpp
  match_day.cpp
  engine.cpp
  game.cpp
  user.cpp
  season.cpp
  team_management.cpp
  club.hpp)
