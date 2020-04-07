#include <iostream>

int sum(int n, int m) { return n + m; }
int max(int x, int y) { 
  int max = x > y ? x : y; 
  return max;
}
int calculate(int a, int b) {
  return sum(a, b) + max(a, b);
}

int main() {
  auto result = calculate(11, 22);
  std::cout << "result == " << result << std::endl;
}
