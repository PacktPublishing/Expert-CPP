#include <iostream>
#include <type_traits>

struct Point {
  float x;
  float y;
};

int main() {
    std::cout << std::is_fundamental_v<Point> << " "
            << std::is_fundamental_v<int> << " "
            << std::is_compound_v<Point> << " "
            << std::is_compound_v<int> << std::endl;
}
