#include <iostream>

struct BeforeMain {
    BeforeMain() {
        std::cout << "Constructing BeforeMain" << std::endl;
        test();
    }    
    void test() {std::cout << "test" << std::endl;}
};

BeforeMain b;

int main() {
    std::cout << "Calling main()" << std::endl;
    return 0;
}
