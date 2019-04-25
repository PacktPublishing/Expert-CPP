//ch4_17_factorial_recursion.cpp
#include <iostream>
uint32_t f(const uint32_t n) {
	if (n == 0) return 1;
	return n * f(n - 1);
}
int main() {
	std::cout << f(10) << std::endl;   //output 3628800
}
