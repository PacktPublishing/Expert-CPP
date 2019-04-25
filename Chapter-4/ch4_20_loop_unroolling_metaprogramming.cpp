//ch4_20_loop_unroolling_metaprogramming.cpp
#include <iostream>

//primary template
template <int N, typename T>
class dotp {
public:
	static T result(T* a, T* b) {
		return *a * *b + dotp<N - 1, T>::result(a + 1, b + 1);
	}
};

// partial specialization for end criteria
template <typename T>
class dotp<1, T> {
public:
	static T result(T* a, T* b) {
		return *a * *b;
	}
};

int main()
{
	float a[5] = { 1, 2, 3, 4, 5 };
	float b[5] = { 6, 7, 8, 9, 10 };

	std::cout << "dot_product(5,a,b) = " << dotp<5, float>::result( a, b) << '\n'; //130
	std::cout << "dot_product(5,a,a) = " << dotp<5,float>::result( a, a) << '\n';  //55
}
