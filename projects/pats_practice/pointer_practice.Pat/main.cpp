#include <iostream>
#include <string>

using namespace std;

void set_pointer(float* point){
    
    //*point = 0.2 * *point;
}

void final_ouput(){

    
}

int main(){

    string name1;
    string name2;
    double wage = 8.39;
    float weeksPay;
    float tax = 0.2;
    double hours;
    float pg;
    float* pointer1;

    pointer1 = &pg;

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
    set_pointer(pointer1);
    pg = weeksPay;
    weeksPay = weeksPay - (tax * weeksPay);
    final_ouput();
    cout << name1 << "'s weeks wage is = "
     << *pointer1 << endl;
    cout <<  "After tax = " << weeksPay
         << endl;

}
