#include <iostream>
#include <string>

class Employee{

public:
    std::string name;
    std::string role;
    int hours;
    int overTime;
    float wage[3] = {8.39, 10.49, 12.59};
    float weeksPay;

    void print();
};

void set_pointer (float* pointer){

}

int main(){
    Employee em;
    float* point;
    float store;

    point = &store;

    std::cout << "\nEnter first employees name: ";
    std::cin >> em.name;
    std::cout << std::endl;
    std::cout << "Enter job role for "
              << em.name
              << "\nOptions are: Sales-Assistant | Supervisor | Manager\n";
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

//Employee pat {em.name, em.role, em.hours, *point};

    std::cout << "\nName: " << em.name
              << "\nJob: " << em.role
              << "\nHours: " << em.hours
              << "\nOvertime: " << em.overTime
              << "\nPaycheck: £" << em.weeksPay
              << "\nPaycheck after Tax: £" << em.weeksPay - (0.2 * em.weeksPay)
                  << std::endl << std::endl;
}
