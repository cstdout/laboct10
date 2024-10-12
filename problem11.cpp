#include <iostream>
int main() {
    
    int n;
    std::cout << "Enter the number" << std::endl;
    std::cin >> n;
    int lastNumber = 1, preLast = 0, x = 0;
    std::cout << lastNumber << ' ';
    for(int i = 0; i < n - 1; ++i)
    {
        x = preLast + lastNumber;
        preLast = lastNumber;
        lastNumber = x;
        
        std::cout << x << ' ';
    }
    
   
    return 0;
}
