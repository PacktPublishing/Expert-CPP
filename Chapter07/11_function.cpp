#include <functional>

void print_it(int a) {
  cout << a;
}

std::function<void(int)> function_object = print_it;