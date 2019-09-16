#include <algorithm>
#include <vector>
#include <list>

int main()
{
  std::vector<int> vec;
  // insert elements into the vector
  std::list<int> lst;
  // insert elements into the list

  std::sort(vec.begin(), vec.end());
  std::sort(lst.begin(), lst.end());
}