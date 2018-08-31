/**
 * Half of the half
**/

#include <iostream>
#include <string>

int main() {
  int t;
  std::string word;
  std::cin>>t;
  while(t--) {
    std::cin>>word;
    for (int i = 0; i < word.length() / 2; i += 2) {
      std::cout<<word[i];
    }
    std::cout<<std::endl;
  }
  return 0;
}