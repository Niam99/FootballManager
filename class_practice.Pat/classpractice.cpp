#include <iostream>
#include <string>
#include "classpractice.hpp"

void Employee::print(){
    {
        Employee em;
        std::cout << "Employee Name: " << name
                  << "  ID: " << id
                  << "  Wage: £" << wage
                  << std::endl ;
    }

}
