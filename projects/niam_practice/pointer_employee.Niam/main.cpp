#include <iostream>

class Employee {
public:
    Employee(double w = 8.0, double h = 12.0, double b = 2.0) {
        std::cout << "Constructor called." << std::endl;
        wage = w;
        bonus = b;
        hours = h;
    }
    double Pay() {
        return (wage * hours) + bonus;
    }

private:
    double wage;
    double bonus;
    double hours;
};

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
