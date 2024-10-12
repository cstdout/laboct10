#include <iostream>
int main() {
    
    int n;
    std::cout << "Enter the number" << std::endl;
    std::cin >> n;
    double sum = 1;
    for(int i = 2; i <= n; ++i)
    {
        sum += 1/((double)i);
    }
    std::cout << sum << std::endl; 
   
    return 0;
}
