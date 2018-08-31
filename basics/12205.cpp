/**
 * HS12MBR
 * Minimum Bounding Rectangle
**/

#include <iostream>
#include <vector>
#include <utility>

typedef std::pair<int, int> point;
typedef std::vector<point> vectorPoints;

void printBoundingRect(vectorPoints& points) {
  int min_x = 1001, min_y = 1001, max_x = -1001, max_y = -1001;

  vectorPoints::iterator it;
  for (it = points.begin(); it != points.end(); ++it) {
    point current = *it;
    if (current.first < min_x) min_x = current.first;
    if (current.first > max_x) max_x = current.first;
    if (current.second < min_y) min_y = current.second;
    if (current.second > max_y) max_y = current.second;
  }

  std::cout<<min_x<<" "<<min_y<<" "<<max_x<<" "<<max_y<<std::endl;
}

int main() {
  int t, n;
  char kind;
  std::cin>>t;
  while(t--) {
    std::cin>>n;
    vectorPoints points;

    while(n--) {
      int a, b, c, d;
      std::cin>>kind;
      switch(kind) {
        case 'p':
          std::cin>>a>>b;
          points.push_back(std::make_pair(a, b));
          break;
        case 'c':
          std::cin>>a>>b>>c;
          points.push_back(std::make_pair(a - c, b));
          points.push_back(std::make_pair(a + c, b));
          points.push_back(std::make_pair(a, b - c));
          points.push_back(std::make_pair(a, b + c));
          break;
        case 'l':
          std::cin>>a>>b>>c>>d;
          points.push_back(std::make_pair(a, b));
          points.push_back(std::make_pair(c, d));
          break;
      }
    }
    printBoundingRect(points);
  }
  return 0;
}