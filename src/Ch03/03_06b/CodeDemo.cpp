// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *prtA = &a;

    std::cout << &a << std::endl;
    std::cout << prtA << std::endl;
    std::cout << *prtA << std::endl;
    std::cout << &prtA << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
