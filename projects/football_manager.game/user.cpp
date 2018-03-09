#include <iostream>
#include <string>
#include "user.hpp"

user::user() {}

user::user(std::string name, std::string team_name)
    : name_(name), team_name_(team_name) {}

std::string user::name() {
    return name_;
}

std::string user::team_name() {
    return team_name_;
}

void user::display(){
    std::cout << "User name: " << name()
              <<  " Team: " << team_name() << std::endl;
}
