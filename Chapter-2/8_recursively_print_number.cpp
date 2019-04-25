#include <iostream>

void print_number(int num) {
    if (num > 100) return;
    std::cout << num << std::endl;
    print_number(num + 1);
}

int main() {
    print_number(1);    
}
