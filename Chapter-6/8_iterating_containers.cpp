#include <list>
#include <vector>

int main()
{
  std::vector<int> vec;
  vec.push_back(4);
  vec.push_back(2);
  std::vector<int>::iterator it = vec.begin();
  std::cout << *it; // 4
  it++;
  std::cout << *it; // 2

  std::list<int> lst;
  lst.push_back(4);
  lst.push_back(2);
  std::list<int>::iterator lit = lst.begin();
  std::cout << *lit; // 4
  lit++;
  std::cout << *lit; // 2
}
