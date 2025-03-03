// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> primies;
    std::cout << primies.size() << std::endl;
    primies.push_back(2);
    std::cout << primies.size() << std::endl;
    std::cout << primies[0] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
