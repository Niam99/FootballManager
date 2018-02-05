#include <iostream>
#include <string>

using namespace std;

int main(){

    string name1;
    float* pointer1;
    string name2;
    double wage = 8.39;
    float weeksPay;
    float tax = 0.2;
    double hours;

    cout << "Insert Employee No.1:";
    cin >> name1;
    cout << endl << endl;
    cout << "Insert Employee No.2:";
    cout << endl << endl;
    cin >> name2;

    cout << "Insert this weeks hours for "
         << name1 << ": ";
    cin >> hours;
    cout << endl << endl;
    weeksPay = wage * hours;
    pointer1 = &weeksPay;
    weeksPay = tax * weeksPay;

    cout << name1 << "'s weeks wage is = "
         << *pointer1 << endl;
    cout <<  "After tax = " << weeksPay
         << endl;
}
