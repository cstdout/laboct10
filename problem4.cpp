// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
  
  int hour;
  std::cout << "Enter an hour form 1 to 12 " << std::endl;
  std::cin >> hour;
  
  short int am;
  std::cout << "am(1) or pm(2)? " << std::endl;
  std::cin >> am;
  
  int shift;
  std::cout << " How many hours ahead? " << std::endl;
  std::cin >> shift;
  
  int hour24format = (am == 1 ? hour : (hour + 12));
  hour24format += shift;
  
  int shiftedHour24format = (hour24format % 24);
  bool amResult = (shiftedHour24format < 13);
  
  int result = (amResult ? shiftedHour24format : (shiftedHour24format % 12));
  
  std::cout << "New hour: " << result << ' ' << (amResult ? "am" : "pm") << std::endl;
  
  return 0;
}
