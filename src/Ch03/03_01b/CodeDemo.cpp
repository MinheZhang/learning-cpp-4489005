// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat};

struct cow {
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){

    cow leslie;
    leslie.name = "hello";
    leslie.age = 5;
    leslie.purpose = cow_purpose::dairy;
    
    std::cout << (int) leslie.purpose << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
