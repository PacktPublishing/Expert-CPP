#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

int main()
{
  std::vector<int> vec;
  // insert elements into the vector
  vec.push_back(4);
  vec.push_back(11);
  vec.push_back(9);
  for (auto& v : vec) {
    std::cout << v << " ";
  }
  std::cout << std::endl;

  std::sort(vec.begin(), vec.end());
  for (auto& v : vec) {
    std::cout << v << " ";
  }
  std::cout << std::endl;
}
