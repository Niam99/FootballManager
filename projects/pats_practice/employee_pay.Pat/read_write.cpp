#include <iostream>
#include <string>
#include "employee.hpp"
#include "read_write.hpp"

using namespace std;

read_write_link raw;

int writef()
{
    ofstream myfile ("example.txt");

    if (myfile.is_open())
    {
        myfile << raw.name;

        myfile << raw.weeksPay;

        myfile.close();
    }

    //return 0;
}

int readf()
{
    string line;

    ifstream myfile ("example.txt");

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    // return 0;
}

void Employee::read_write(){
    writef();
    readf();
}
