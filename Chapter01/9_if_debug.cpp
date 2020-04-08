#include <string>
#include <iostream>
// #define DEBUG 1

void log(const std::string& msg) {
#if DEBUG
    std::cout << msg << std::endl;
#endif
}

void foo() {
    log("foo() called");
    // do some useful job
}

void start() { 
    log("start() called");
    foo();
    // do some useful job
}

int main() {
    start();
}
