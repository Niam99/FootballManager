#include <iostream>
#include <string>
#include "classpractice.hpp"

void Employee::print(){
    {

        std::cout << "Employee Name: " << name
                  << "  ID: " << id
                  << "  Wage: £" << wage;
    }

}
