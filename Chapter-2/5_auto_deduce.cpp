#include <iostream> 

auto foo() -> int
{
    std::cout << "foo in alternative syntax" << std::endl;
    return true;
}

auto foo14() {
    std::cout << "In C++14 syntax" << std::endl;
    return 0;
}

int main() {
    foo();
    foo14();
}
