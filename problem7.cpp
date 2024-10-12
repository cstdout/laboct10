#include <iostream>
#include <cstdlib>
int main() {
   srand(time(0)); 
   int money = 100;
   int r;
   while (money >= 10 && money < 200)
   {
       r = rand() % 2;
       std::cout << "Guess the number (0) or (1) " << std::endl;
       
       int guess;
       std::cin >> guess;
       if (guess == r)
       {
           money += 9;
           std::cout << "Correct" << std::endl;
       }
       else
       {
           money -= 10;
           std::cout << "Incorrect" << std::endl;
       }
       std::cout << money << std::endl;
   }
   std::cout << "Game over" << std::endl << money;
    return 0;
}
