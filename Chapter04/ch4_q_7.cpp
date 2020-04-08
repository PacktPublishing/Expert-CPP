//file ch4_5_class_template_implicit_inst_B_v2.c
#include <iostream>
template<int n>
inline double f(const double x) {
	return f<n - 1>(x) * x;
}
template<>
inline double f<1>(const double x) {
	return x;
}
template<>
inline double f<0>(const double x) {
	return 1.0;
}

int main() {
	std::cout << f<32>(2.0) << std::endl;
	return 0;
}

