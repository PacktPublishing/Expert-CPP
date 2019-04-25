#include <iostream>
#include <exception>

auto takes_positive(int arg) {
    if (arg < 0) {
        throw std::invalid_argument("Is negative");
    }
    return 1;
}

int main() {
    try {
        takes_positive(-4);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
