// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, meat};

int main(){
    int a;
    int meat = 8; // won't complain

    a = meat;

    std::cout << "a = " << a << std::endl;

    int b;
    grocery_section gs = grocery_section::meat;
    b = (int) gs;
    std::cout << "b = " << b << std::endl; // 1 expected

    std::cout << std::endl << std::endl;
    return (0);
}
