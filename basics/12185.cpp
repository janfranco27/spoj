/**
 * Character Patterns (Act 5)
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
    int rows, cols, size;
    bool slash;
    std::string pattern;
    std::cin>>rows>>cols>>size;

    for (int i = 0; i < rows; i++) {
      println(cols, size);
      for (int k = 0; k < size; k++) {
        for (int j = 0; j < cols; j++) {
          slash = (i + j) % 2 != 0;
          std::cout<<"*";
          for (int l = 0; l < size; l++) {
            if (k + l == size - 1 && slash) std::cout<<'/';
            else if (k == l && !slash) std::cout<<'\\';
            else std::cout<<'.';
          }
        }
        std::cout<<'*'<<std::endl;
      }
    }
    println(cols, size);
    std::cout<<std::endl;
  }
  return 0;
}

