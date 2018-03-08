#include <iostream>
#include <string>
#inlcude "user.hpp"

user::user(){
}

user::user_setup(std::string name, std::string team_name)
    : name_(name), team_name_(team_name);{
}

std::string user::name() {
    return name_;
}

std::string user::team_name() {
    return team_name_;
}
