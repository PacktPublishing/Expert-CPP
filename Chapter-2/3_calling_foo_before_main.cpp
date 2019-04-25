#include <iostream>

void foo() { 
    std::cout << "Risky foo" << std::endl; 
}

// trying to call the foo() outside of the main() function
foo();

int main() {
    std::cout << "Calling main()" << std::endl;
    return 0;
}
