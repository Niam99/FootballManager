#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "class.hpp"
std::string employeelist;

int readf()
{
    std::string line;
    std::ifstream myfile ("employee.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            std::cout << "Record-:  " << line << std::endl;
            employeelist = line;
        }
        myfile.close();
    }
    else std::cout << "Unable to open file";
}

int main() {
    readf();
    double wage;
    double hours;
    double bonus;
    std::string name;
    std::cout << "Please enter wage" << std::endl;
    std::cin >> wage;
    std::cout << "Please enter hours" << std::endl;
    std::cin >> hours;
    std::cout << "Please enter bonus" << std::endl;
    std::cin >> bonus;
    std::cout << "Please enter name" << std::endl;
    std::cin >> name;
    
    Employee Employee1(wage, hours, bonus);
    
    Employee *ptrEmployee;
    ptrEmployee = &Employee1;

    std::cout << "Employee " << name << " pay: £ " << ptrEmployee->Pay() << std::endl;
    
    std::ofstream myfile;
    myfile.open ("employee.txt", std::fstream::app);
    myfile << "Employee " << name << " pay: £ " << ptrEmployee->Pay() << std::endl;
    myfile.close();
    std::cout << "Record saved" << std::endl;   

}

  
