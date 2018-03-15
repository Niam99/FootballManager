#include <iostream>
#include "club.hpp"

club::club() {
}

club::club(std::string name)
    : name_(name){
}

std::string club::name() {
    return name_;
}
