#include <iostream>

auto foo(int arg) [[expects: arg > 0]] {
    return arg;
}

int main() {
    foo(-4);
}
