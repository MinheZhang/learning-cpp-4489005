// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattles;

    cattles.push_back(cow("lieslie", 6, cow_purpose::pet));
    cattles.push_back(cow("lieslie", 6, cow_purpose::pet));
    cattles.push_back(cow("lieslie", 6, cow_purpose::pet));
    
    std::cout << cattles.begin()->get_name() << std::endl;
    std::cout << prev(cattles.end() - 1)->get_name() << std::endl;
    std::cout << (cattles.end() - 1)->get_name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
