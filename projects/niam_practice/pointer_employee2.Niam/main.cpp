#include <iostream>
#include <string>
#include "class.hpp"

int main() {
    Employee Employee1(9.0, 11.2, 3.0,0.2);
    Employee Employee2(8.5, 6.0, 2.0,0.2);
    Employee Employee3(7.5, 23.5, 7.0,0.2);
    Employee *ptrEmployee;
    ptrEmployee = &Employee1;

    std::cout << "Employee 1 pay: £ " << ptrEmployee->Pay() << std::endl;
    int p = ptrEmployee->Pay();
    std::cout << "Money after tax: £ " << ptrEmployee->Tax(p) << std::endl;
    std::cout << "------------------------" << std::endl;

    ptrEmployee = &Employee2;

    std::cout << "Employee 2 pay: £ " << ptrEmployee->Pay() << std::endl;
    p = ptrEmployee->Pay();
    std::cout << "Money after tax: £ " << ptrEmployee->Tax(p) << std::endl;
    std::cout << "------------------------" << std::endl;

    ptrEmployee = &Employee3;

    std::cout << "Employee 3 pay: £ " << ptrEmployee->Pay() << std::endl;
    p = ptrEmployee->Pay();
    std::cout << "Money after tax: £ " << ptrEmployee->Tax(p) << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << "Would you like to add another employee? yes/no" << std::endl;
    std::string answer;
    std::cin >> answer;
    double wage;
    double hours;
    double bonus;
    double tax;
    if (answer == "yes") {
        std::cout << "Please enter wage" << std::endl;
        std::cin >> wage;
        std::cout << "Please enter hours" << std::endl;
        std::cin >> hours;
        std::cout << "Please enter bonus" << std::endl;
        std::cin >> bonus;
        std::cout << "Please enter tax rate" << std::endl;
        std::cin >> tax;
        Employee Employee4(wage, hours, bonus,tax);
        ptrEmployee = &Employee4;

        std::cout << "Employee 4 pay: £ " << ptrEmployee->Pay() << std::endl;
        p = ptrEmployee->Pay();
        std::cout << "Money after tax: £ " << ptrEmployee->Tax(p) << std::endl;
        std::cout << "------------------------" << std::endl;
    }
    return 0;
}
