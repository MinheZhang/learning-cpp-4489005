// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow {
    public:
    cow(std::string nameI) {
        name = nameI;
    }
    std::string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    cow_purpose getPurpose() const {
        return purpose;
    }
    private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("leslie");
    std::cout << my_cow.getName() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
