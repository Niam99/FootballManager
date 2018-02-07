#ifndef CLASS_HPP
#define CLASS_HPP
#include <iostream>

class Employee {
public:
    Employee(double w = 1.0, double h = 1.0, double b = 1.0);
    double Pay();

private:
    double wage;
    double bonus;
    double hours;
};
#endif

