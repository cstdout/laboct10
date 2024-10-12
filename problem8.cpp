#include <iostream>
int main() {
    int n;
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;
    int i = 1;
    while(i <= 10)
    {
        std::cout << n << 'x' << i << '=' << n * i << std::endl;
        ++i;
    } 
    return 0;
}
