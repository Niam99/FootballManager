#include <iostream>
#include <string>
#include "team_management.hpp"
#include "user.hpp"
#include "engine.hpp"

team_management::team_management() {}

void team_management::display(){

    for (user uTM : game_.users()) {
         uTM.display();
     }

//user uTM;
//uTM.display();    
}
