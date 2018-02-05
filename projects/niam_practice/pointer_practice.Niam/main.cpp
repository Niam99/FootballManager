#include <iostream>
#include <string>

void double_it(int *p) {
    *p = *p * 2;
}


int main() {

    int var = 10;
    int *pointer = &var;

    std::cout << *pointer << std::endl; //prints 10
    double_it(pointer);
    std::cout << *pointer << std::endl;//prints 20
    std::cout << var << std::endl; //prints 20 also, because we
                                   //changed the object *pointer
                                   //pointed to.
}
