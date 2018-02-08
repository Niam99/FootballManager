#include <iostream>
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
    return 0;
}
