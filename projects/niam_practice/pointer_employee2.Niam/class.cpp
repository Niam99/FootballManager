#include <iostream>
#include "class.hpp"

Employee::Employee(double w, double h, double b) {
        std::cout << "Constructor called." << std::endl;
        wage = w;
        bonus = b;
        hours = h;
}

double Employee::Pay() {
    return (wage * hours) + bonus;
}
