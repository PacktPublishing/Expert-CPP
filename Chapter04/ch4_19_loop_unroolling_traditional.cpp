//ch4_19_loop_unoolling_convention.cpp
#include <iostream>

template<typename T>
T dotp(int n, const T* a, const T* b)
{
	T ret = 0;
	for (int i = 0; i < n; ++i) {
		ret += a[i] * b[i];
	}
	return ret;
}

int main()
{
	float a[5] = { 1, 2, 3, 4, 5 };
	float b[5] = { 6, 7, 8, 9, 10 };

	std::cout << "dot_product(5,a,b) = " << dotp<float>(5, a, b) << '\n'; //130
	std::cout << "dot_product(5,a,a) = " << dotp<float>(5, a, a) << '\n'; //55
}
