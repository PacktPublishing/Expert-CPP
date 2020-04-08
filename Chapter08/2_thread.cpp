#include <thread>

void foo() {
  std::cout << "Testing a thread in C++" << std::endl;
}

int main() {
  std::thread test_thread{foo};
  test_thread.join();
}
