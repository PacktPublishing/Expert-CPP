#include <functional>
#include <iostream>

std::function<int (int, int)> get_multiplier()
{
  return [](int a, int b) { return a * b; };
}

int main()
{
  auto multiply = get_multiplier();
  std::cout << multiply(3, 5) << std::endl; // outputs 15
}