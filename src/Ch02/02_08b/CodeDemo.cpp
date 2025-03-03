// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

int main(){
    const size_t AGE_LENGTH = 4;
    int age[AGE_LENGTH];
    float someFloats[] = {1.0f, 2.0f, 4.0f};

    std::cout << age[0]; // nonsense

    std::cout << std::endl << std::endl;
    return (0);
}
