#if __has_include("custom_io_stream.h")
    #include "custom_io_stream.h")
#else
    #include <iostream>
#endif

#include "rect.h"
#include "square.h"

int main() {
    Rect r(3.1, 4.05);
    std::cout << r.get_area() << std::endl;

    return 0;
}
