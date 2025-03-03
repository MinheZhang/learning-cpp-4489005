// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH_1 = 25;

    char arrayHello[LENGTH_1] = "HELLO! ";
    char arrayEmpty[] = "EMPTY? ";
    std::cout << arrayHello << std::endl;
    std::cout << arrayEmpty << std::endl;

    strncat(arrayHello, arrayEmpty, LENGTH_1); // modify the first string
    std::cout << arrayHello << std::endl;

    std::string helloStr = "hello! ";
    std::string emptyStr = "empty? ";

    // operator overloading. string not modified.
    std::cout << helloStr + emptyStr << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
