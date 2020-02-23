#include <array>
#include <iostream>
#include <algorithm>

int main()
{
  std::array<int, 4> arr{1, 2, 3, 4};
  auto res = std::count_if(arr.cbegin(), arr.cend(), 
    [](int x){ return x == 3; });
  std::cout << "There are " << res << " number of elements equal to 3" << std::endl;
}