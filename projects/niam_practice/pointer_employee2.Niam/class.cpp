#include <iostream>
#include "class.hpp"

double Employee::Employee(double w = 8.0, double h = 12.0, double b = 2.0) {
        std::cout << "Constructor called." << std::endl;
        wage = w;
        bonus = b;
        hours = h;
}

double Employee::Pay() {
    return (wage * hours) + bonus;
}
