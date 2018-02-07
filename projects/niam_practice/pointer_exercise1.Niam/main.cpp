#include<iostream>

int main()
{
    int arr[5],i;
    int *p = arr;
    std::cout << "Enter five numbers separated by space:";
    std::cin >> *p >> *(p+1) >> *(p+2) >> *(p+3) >> *(p+4);
    std::cout << "Your numbers are:" << std::endl;
    for(i=0; i<5; i++){
        std::cout << arr[i] << std::endl;
    }
    return 0;
} 
