#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <string>

class Employee{

public:
    std::string name;
    std::string role;
    int hours;
    int overTime;
    float wage[3] = {8.39, 10.49, 12.59};
    float weeksPay;

    void print();
};

#endif
