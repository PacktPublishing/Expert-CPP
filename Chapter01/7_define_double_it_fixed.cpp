#include <iostream>

// added additional parentheses around the arg
#define DOUBLE_IT(arg) ((arg) * (arg))

int main() {
    int st = DOUBLE_IT(4);
    std::cout << st << std::endl;

    int bad_result = DOUBLE_IT(4 + 1);
    std::cout << bad_result << std::endl;

    return 0;
}
