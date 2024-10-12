#include <iostream>

int main() {
   int workingExperience;
   double salary;
   
   std::cout<< "Enter your salary " << std::endl;
   std::cin >> salary;
   
   std::cout<< "Enter your working experience in years " << std::endl;
   std::cin >> workingExperience;
   
   if(workingExperience > 5)
   {
       std::cout << "Net bouns: " << salary * 1.05 << std::endl;
   }
   else
   {
       std::cout << "No bonus" << std::endl;
   }
   
   
   return 0;
}
