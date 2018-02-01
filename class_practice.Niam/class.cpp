#include <iostream>
#include <string>
#include "class.hpp"

void Employee::print()
{
    std::cout << "Name: " << m_name << "  Id: " << m_id << "  Wage: $" << m_wage << std::endl;
}
