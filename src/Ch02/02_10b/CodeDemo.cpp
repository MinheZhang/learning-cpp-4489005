// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){

    // implicit conversion: value not changed
    float flt;
    int32_t sgn;
    uint32_t unsgn;
    
    flt = -6.66; // double. it's possible. implicit conversion
    sgn = flt; // implicit converted. expect -7
    unsgn = sgn; // should be wired value.

    std::cout << flt << std::endl; // -6.66
    std::cout << sgn << std::endl; // -6
    std::cout << unsgn << std::endl; // 4294967290 which might vairy.
    std::cout << (int32_t) unsgn << std::endl; // -6

    
    std::cout << std::endl << std::endl;
    return (0);
}
