#include <iostream>

int main() {
  
    int age;
    std::cout << "Enter your age ";
    std::cin >> age;
    
    if(age >= 0 && age <= 14)
    {
        std::cout << "child";
    }
    else if(age >= 15 && age <= 24)
    {
        std::cout << "young";
    }
    else if(age >= 25 && age <= 64)
    {
        std::cout << "adult";
    }
    else if(age >= 60)
    {
        std::cout << "senior";
    }
    
    return 0;
}
