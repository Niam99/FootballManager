#include <iostream>
#include <string>
 
int main () {
   // an array with 5 elements.
   int array[5] = {10, 31, 42, 17, 50};
   int *p;

   p = array;
 
   // output each array element's value 
   std::cout << "Array values using pointer " << std::endl;
   
   for ( int i = 0; i < 5; i++ ) {
      std::cout << "*(p + " << i << ") : ";
      std::cout << *(p + i) << std::endl;
   }
   std::cout << "Array values using 'array' as address " << std::endl;
   
   for ( int i = 0; i < 5; i++ ) {
      std::cout << "*(array + " << i << ") : ";
      std::cout << *(array + i) << std::endl;
   }
 
   return 0;
}
