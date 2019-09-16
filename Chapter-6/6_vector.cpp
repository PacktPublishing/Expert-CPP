#include <vector>

int main()
{
  std::vector<int> vec;
  vec.push_back(4);
  vec.push_back(2);
  for (const auto& elem : vec) {
    std::cout << elem;
  }
}
