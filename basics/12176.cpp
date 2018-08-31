/**
 * Character Patterns (Act 1)
**/

#include <iostream>

int main() {
  int t;
  std::cin>>t;
  while(t--) {
    int rows, cols;
    char pattern;
    std::cin>>rows>>cols;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if ((i+j) % 2 == 0) pattern = '*';
        else pattern = '.';
        std::cout<<pattern;
      }
      std::cout<<std::endl;
    }
  }
  return 0;
}