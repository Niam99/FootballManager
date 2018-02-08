#include <iostream>
#include <string>
#include "employee.hpp"

void set_pointer (float* pointer){

}

int main(){

    Employee em;
    float* point;
    float store;

    bool loopLock = false;
    std::string text;

    while(loopLock == false){

        std::cout << "Would you like to make a new entry or exit?"
                  << "\nOptions are: | New | Exit |" << std::endl;
        std::cin >> text;

        if (text == "Exit" || text == "exit"){
            std::cout << ".\n.\n.\nExiting..." << std::endl;
            break;
        }

        if (text == "new" || text == "New"){

            point = &store;

            std::cout << "\nEnter first employees name: ";
            std::cin >> em.name;
            std::cout << std::endl;
            std::cout << "Enter job role for "
                      << em.name
                      << "\nOptions are: | Sales-Assistant | Supervisor | Manager |\n";
            std::cin >> em.role;
            std::cout << "\nEnter " << em.name << "'s Hours for this week:";
            std::cin >> em.hours;
            std::cout << "\nEnter " << em.name << "'s Overtime for this week:";
            std::cin >> em.overTime;
            if (em.role == "Sales-Assistant" || em.role == "sales-assistant"){
                set_pointer(point);
                store = em.wage[0];
            }

            if (em.role == "Supervisor" || em.role == "supervisor"){
                set_pointer(point);
                store = em.wage[1];
            }

            if (em.role == "Manager" || em.role == "manager"){
                set_pointer(point);
                store = em.wage[2];
            }

            em.weeksPay = *point * em.hours;

            em.weeksPay = em.weeksPay + (*point * em.overTime);

            em.print();

            //Employee pat {em.name, em.role, em.hours, *point};

            // std::cout << "\nName: " << em.name
            //           << "\nJob: " << em.role
            //           << "\nHours: " << em.hours
            //           << "\nOvertime: " << em.overTime
            //           << "\nPaycheck: £" << em.weeksPay
            //           << "\nPaycheck after Tax: £" << em.weeksPay - (0.2 * em.weeksPay)
            //           << std::endl << std::endl;
        }
    }

}
