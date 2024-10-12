#include <iostream>
int main() {
    int sum = 0;
    for(int i = 1; i < 1999; i += 2)
    {
        sum += (i - (i + 1));
    }
    std::cout << sum;
    return 0;
}
