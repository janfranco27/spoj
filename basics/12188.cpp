/**
 * Character Patterns (Act 7)
**/

#include <iostream>
#include <string>

int main() {
  int t;
  std::cin>>t;
  while(t--) {
    int rows, cols, size;
    std::cin>>rows>>cols>>size;
    bool slash;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < 2 * size; j++) {
        for (int k = 0; k < cols; k++) {
          if (j < size) slash = true;
          else slash = false;
          for (int l = 0; l < 2 * size; l++) {
            if (l == size) slash = !slash; 
            if (slash) {
              if ((j + l) == size - 1 || (j + l) == 3 * size - 1) std::cout<<'/';
              else std::cout<<'.';
            } else {
              if (j + size == l || l + size == j) std::cout<<'\\';
              else std::cout<<'.';
            }
          }
        }
        std::cout<<std::endl;
      }
    }

    std::cout<<std::endl;
  }
  return 0;
}

