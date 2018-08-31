/**
 * Character Patterns (Act 6)
**/

#include <iostream>
#include <string>

void println(char a, char b, int width, int cols) {
  for (int i = 0; i < cols; i++) {
    for (int j = 0; j < width; j++) {
      std::cout<<a;
    }
    std::cout<<b;
  }
  for (int j = 0; j < width; j++) {
    std::cout<<a;
  }
  std::cout<<std::endl;
}

int main() {
  int t;
  std::cin>>t;
  while(t--) {
    int rows, cols, height, width;
    std::cin>>rows>>cols>>height>>width;

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < height; j++) {
        println('.', '|', width, cols);
      }
      println('-', '+', width, cols);
    }
    for (int j = 0; j < height; j++) {
      println('.', '|', width, cols);
    }

    std::cout<<std::endl;
  }
  return 0;
}

