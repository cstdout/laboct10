#include <iostream>
#include <string>
int main() {
    
    std::cout << "Enter your name" << std::endl;
    
    std::string name;
    std::cin >> name;
    
    int n;
    std::cout << "How many time print it?" << std::endl;
    std::cin >> n;
    
    for(int i = 0; i < n; ++i)
    {
        std::cout << name << ' ';
    }
    
    return 0;
}
