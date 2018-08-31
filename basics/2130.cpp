/**
 * Life, the Universe, and Everything
**/

#include <iostream>

int main() {
  int n;
  while (std::cin>>n) {
    std::cout<<n<<std::endl;
    if (n == 42) break;
  }
  return 0;
}