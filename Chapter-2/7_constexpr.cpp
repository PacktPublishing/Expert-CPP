#include <iostream>

int double_it(int number) {
  return number * 2;
}

constexpr int triple_it(int number) {
  return number * 3;
}

int main() {
  int test = 42;
  int doubled = double_it(test);
  int tripled = triple_it(test);
  std::cin >> test;
  int another_tripled = triple_it(test);
}  
