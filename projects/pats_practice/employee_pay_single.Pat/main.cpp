#include <iostream>
#include <string>

class Employee{

public:
    std::string name;
    std::string role;
    int rate;
    float wage[3] = {8.39, 10.49, 12.59};

    void print();
};


int main(){
    Employee em;
    float* point;


    std::cout << "\nEnter first employees name: ";
    std::cin >> em.name;
    std::cout << std::endl;
    std::cout << "Enter job role for "
              << em.name
              << "\nOptions are: Sales-Assistant | Supervisor | Manager\n";
    std::cin >> em.role;
    if (em.role == "Sales-Assistant" || em.role == "sales-assistant"){
        point = &em.wage[1];
        em.rate = 8.39;
    }
    Employee pat {em.name, em.role, em.rate, *point};
    
    std::cout << "Employee Name: " << em.name
              << "\nWage: £" << point
                  << std::endl ;
}

// void Employee::print(){
//     {
//         std::cout << "Employee Name: " << name
//                   << "\nWage: £" << *point
//                   << std::endl ;
//     }

// }
