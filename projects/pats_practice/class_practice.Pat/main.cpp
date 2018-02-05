#include <vector>
#include <iostream>
#include <string>
#include "classpractice.hpp"

int main()
{
    std::cout << "I'll just put this here\n";
    Employee pat {"Patrck", 1, 8.39};
    Employee john {"John", 1, 10.39};
    Employee steve {"Steve", 1, 12.39};


    std::vecto<rEmployee> collection_employees;
    collection_employees.push_back(pat);

     push_back(pat);

    pat.print();
    john.print();
    steve.print();

    return 0;
}
