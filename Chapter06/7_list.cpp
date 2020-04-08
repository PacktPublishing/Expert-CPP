#include <list>

int main() {
  std::list<int> lst;
  lst.push_back(4);
  lst.push_back(2);
  for (const auto& elem : lst) {
    std::cout << elem;
  }
}
