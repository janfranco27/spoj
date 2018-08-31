/**
 * HS12HDPW
 * Hidden Password
**/

#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <vector>

std::vector<int> sizes  = {128, 64, 32, 16, 8, 4, 2, 1};

void printVector(std::vector<int>& v) {
  std::vector<int>::iterator it;
  for (it = v.begin(); it != v.end(); ++it) {
    std::cout<<*it<<"  ";
  }
  std::cout<<std::endl;
}

std::vector<int> numberToBin(int n) {
  std::vector<int> r;
  for (int i = 0; i < sizes.size(); i++) {
    if (n >= sizes[i]) {
      r.insert(r.begin(), 1);
      n -= sizes[i];
    } else {
      r.insert(r.begin(), 0);
    }
  }
  return r;
}

int vectorToNum(std::vector<int>& v) {
  std::vector<int>::reverse_iterator it1, it2;
  int n = 0;
  for (it1 = v.rbegin(), it2 = sizes.rbegin(); it1 != v.rend(); ++it1, ++it2) {
    n += (*it1) * (*it2);
  }
  return n;
}

int main() {
  int t, n;
  std::string tuple;

  std::cin>>t;
  while(t--) {
    std::cin>>n;
    std::vector<int> resultIndexes;
    while (n--) {
      std::cin>>tuple;
      std::vector<int> hold1, hold2;
      for (int i = 0; i < tuple.size(); ++i) {
        std::vector<int> r = numberToBin((int) tuple[i]);
        hold1.insert(hold1.begin(), r[i]);
        hold2.insert(hold2.begin(), r[(i+3) % 6]);
      }
      resultIndexes.push_back(vectorToNum(hold1));
      resultIndexes.push_back(vectorToNum(hold2));
    }
    std::string pwd;
    std::cin>>pwd;
    std::vector<int>::iterator it;
    for (it = resultIndexes.begin(); it != resultIndexes.end(); ++it) {
      std::cout<<pwd[*it];
    }

    
    std::cout<<std::endl;
  }
  return 0;
}