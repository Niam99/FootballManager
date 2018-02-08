#include <iostream>
#include <string>
#include "employee.hpp"

void Employee::print(){
    {
        std::cout << "\nName: " << em.name
                  << "\nJob: " << em.role
                  << "\nHours: " << em.hours
                  << "\nOvertime: " << em.overTime
                  << "\nPaycheck: £" << em.weeksPay
                  << "\nPaycheck after Tax: £" << em.weeksPay - (0.2 * em.weeksPay)
                  << std::endl << std::endl;
    }

}
