#ifndef CLASS_HPP
#define CLASS_HPP
#include <iostream>

class Employee {
public:
    Employee(double w = 1.0, double h = 1.0, double b = 1.0);
    double Pay();
    double Tax(double p = 0.1);

private:
    double wage;
    double bonus;
    double hours;
};
#endif

