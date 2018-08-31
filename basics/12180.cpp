/**
 * Character Patterns (Act 4)
**/

#include <iostream>
#include <string>


void println(int cols, int width) {
  for (int i = 0; i < cols * (width + 1) + 1; i++) {
    std::cout<<'*';
  }
  std::cout<<std::endl;
}

int main() {
  int t;
  std::cin>>t;
  while(t--) {
    int rows, cols, height, width;
    std::string pattern;
    std::cin>>rows>>cols>>height>>width;
    for (int i = 0; i < rows; i++) {
      println(cols, width);
      for (int k = 0; k < height; k++) {
        for (int j = 0; j < cols; j++) {
          if (j < cols - 1) pattern = "*" + std::string(width, '.');
          else pattern = "*" + std::string(width, '.') + "*";
          std::cout<<pattern;
        }

        std::cout<<std::endl;
      }
    }
    println(cols, width);
    std::cout<<std::endl;
  }
  return 0;
}

