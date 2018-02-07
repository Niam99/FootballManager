#include <iostream>
#include "class.hpp"

int main() {
    Employee Employee1(9.0, 11.2, 3.0);
    Employee Employee2(8.5, 6.0, 2.0);
    Employee *ptrEmployee;
    ptrEmployee = &Employee1;

    std::cout << "Employee 1 pay: £ " << ptrEmployee->Pay() << std::endl;

    ptrEmployee = &Employee2;

    std::cout << "Employee 2 pay: £ " << ptrEmployee->Pay() << std::endl;

    return 0;
}
