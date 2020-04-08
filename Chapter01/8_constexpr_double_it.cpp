#include <iostream>
constexpr int double_it(int arg) { return arg * arg; }

int main() {
    int good_result = double_it(4 + 1);
    std::cout << good_result << std::endl;

    return 0;
}
