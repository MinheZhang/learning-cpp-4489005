// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result = 0.0f; 

    // Write your code here
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i += 1) {
        result += (float) nums[i];
    }

    result /= 5;
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
