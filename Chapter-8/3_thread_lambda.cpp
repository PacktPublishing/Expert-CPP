#include <thread>

int main() {
  std::thread tl{[]{
    std::cout << "A lambda passed to the thread";
  }};
}
