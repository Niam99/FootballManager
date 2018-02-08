#include <iostream>
#include <string>
#include "employee.hpp"

void Employee::print(){
    {
        //Employee em;
         std::cout << "\nName: " << name
                   << "\nJob: " << role
                   << "\nHours: " << hours
                   << "\nOvertime: " << overTime
                   << "\nPaycheck: £" << weeksPay
                   << "\nPaycheck after Tax: £" << weeksPay - (0.2 * weeksPay)
                   << std::endl << std::endl;
    }

}
