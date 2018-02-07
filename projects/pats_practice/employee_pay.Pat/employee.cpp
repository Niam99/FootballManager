#include <iostream>
#include <string>
#include "employee.hpp"

void Employee::print(){
    {
        std::cout << "Employee Name: " << name
                  << "\nID: " << id
                  << "\nWage: £" << wage
                  << std::endl ;
    }

}
