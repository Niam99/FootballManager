#include <iostream>
#include "class.hpp"

Employee::Employee(double w, double h, double b, double t) {
        std::cout << "Constructor called." << std::endl;
        wage = w;
        bonus = b;
        hours = h;
        tax = t;
}

double Employee::Pay() {
    return (wage * hours) + bonus;
}

double Employee::Tax(double p) {
    p = p - (p * tax);
    return p;
} 
