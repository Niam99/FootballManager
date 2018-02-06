#include <iostream>
#include <string>

using namespace std;

void set_pointer (int* pointer){

}

int main(){

    int numb;
    int* point;
    int store;

    point = &store;

    cout << "Enter a number: ";
    cin >> numb;
    cout << endl << endl;

    set_pointer(point);
    store = numb;
    
    cout << "Multiply that number by: ";
    cin >> numb;
    cout << endl << endl;

    cout << *point << " X " << numb << " = "
         << *point * numb << endl << endl; 
}
