#include <iostream>

auto get_ratio(bool minimum) {
    if (minimum) {
        return 12;    
    }
    return 18;
}

auto main() {
    std::cout << get_ratio(true) << std::endl;    
    return 0;
}
