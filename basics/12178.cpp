/**
 * Character Patterns (Act 3)
**/

#include <iostream>
#include <string>

void println(int cols) {
  for (int i = 0; i < 3 * cols + 1; i++) {
    std::cout<<'*';
  }
  std::cout<<std::endl;
}

int main() {
  int t;
  std::cin>>t;
  while(t--) {
    int rows, cols;
    std::string pattern;
    std::cin>>rows>>cols;
    for (int i = 0; i < rows; i++) {
      println(cols);
      for (int k = 0; k < 2; k++) {
        for (int j = 0; j < cols; j++) {
          if (j < cols - 1) pattern = "*..";
          else pattern = "*..*";
          std::cout<<pattern;
        }

        std::cout<<std::endl;
      }
    }
    println(cols);
    std::cout<<std::endl;
  }
  return 0;
}

