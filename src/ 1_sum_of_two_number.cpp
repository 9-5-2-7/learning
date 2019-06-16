#include <iostream>

int main() {
   std::cout << "PLease enter two numbers: " << std::endl;
   int i, j, sum;
   std::cin >> i >> j;
   sum = i + j;
   std::cout << "The sum of " << i << " and " << j << " is " << sum;
   return 0;
}

