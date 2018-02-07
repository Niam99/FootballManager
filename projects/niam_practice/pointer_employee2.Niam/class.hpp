#ifndef CLASS_HPP
#define CLASS_HPP
#include <iostream>

class Employee {
public:
    Employee(double w = 8.0, double h = 12.0, double b = 2.0);
    double Pay();

private:
    double wage;
    double bonus;
    double hours;
};
#endif

