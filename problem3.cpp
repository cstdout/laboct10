#include <iostream>

int main() {
  
  int a, b, c;
  
  std::cout << "Enter three numbers" << std::endl;
  std::cin >> a >> b >> c;
  
  std::cout << (((a * b) == c) ? "True" : "False") << std::endl;
  
  return 0;
}
