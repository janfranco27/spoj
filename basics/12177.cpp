/**
 * Character Patterns (Act 2)
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
        if (i > 0 && j > 0 && i < rows - 1 && j < cols - 1) pattern = '.';
        else pattern = '*';
        std::cout<<pattern;
      }
      std::cout<<std::endl;
    }
  }
  return 0;
}