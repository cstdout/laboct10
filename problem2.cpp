#include <iostream>

int main() {
  
  int year;
  std::cout << "Enter a year " << std::endl;
  std::cin >> year;
  
  if(( ( !(year % 400) && (year % 100) ) && !(year % 4) ))
  {
      std::cout << "leap";
  }
  else
  {
      std::cout << "not leap";
  }
    return 0;
}
